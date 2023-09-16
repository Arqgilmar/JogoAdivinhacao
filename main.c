#include <stdio.h>
#include <time.h>

int main(void) {
  
  printf("==========================================\n");
  printf("     BEM VINDO AO JOGO DA ADIVINHAÇÃO     \n");
  printf("==========================================\n");
  
  int segundos = time(0);
  srand(segundos);

   int numgrande = rand();
  
  int numsec = numgrande % 100;

  int ganhou = 0;
  
  int chute;

  int tentativas;

  int pontos = 1000;

  int nivel;

  printf("      Escolha a dificuldade do jogo:      \n");
  printf("==========================================\n");
  printf("      (1)FÁCIL  (2)MÈDIO  (3)DIFÍCIL      \n");
  printf("==========================================\n");
  printf("Escolha:");
  scanf("%d", &nivel);
  
  switch(nivel){
    case 1:
      tentativas = 25;
      break;

    case 2:
      tentativas = 15;
      break;

    default:
      tentativas = 6;
      break;
    
  }
  
  for(int i = 1; i <= tentativas; i++){
    printf("             TENTATIVA %d de %d           \n", i, tentativas);
    printf("==========================================\n");
    printf("Qual é seu número? \n");
    scanf("%d", &chute);
    printf("==========================================\n");
    printf("             Seu chute foi %d             \n", chute);
    
    int acertou = numsec == chute;

    int maior = numsec < chute;

    if(chute < 0){
      printf("==========================================\n");
      printf("  Você não pode chutar números negativos  \n");
      printf("==========================================\n");
      

      continue;
    }
          
    if(acertou){
      printf("==========================================\n");
      printf("         PARABÉNS!!! VOCÊ ACERTOU         \n");
      printf("==========================================\n");
      printf("       Você acertou em %d tentativas      \n", i);
      printf("==========================================\n");
      printf("SUA PONTUAÇÃO É DE:                   %d  \n", pontos);
      printf("==========================================\n");

      break;
    } 
    
    else if(maior){
      printf("==========================================\n");
      printf("                VOCÊ ERROU                \n");
      printf("==========================================\n");
      printf("     Seu chute foi MAIOR que o número     \n");
      printf("==========================================\n");
    }
    
    else{
          printf("==========================================\n");
          printf("                VOCÊ ERROU                \n");
          printf("==========================================\n");
          printf(" Seu chute foi MENOR que o número secreto \n");
          printf("==========================================\n");
    }    

  pontos = pontos - 10;
    
  }  

  printf("                FIM DE JOGO               \n");
  printf("==========================================\n");
}
