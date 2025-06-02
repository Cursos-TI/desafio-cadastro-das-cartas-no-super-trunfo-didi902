#include <stdio.h>




void movetorre(int movimento){ 

  do {printf("Direita \n");

    movimento --;

  } while (movimento > 0);

} 

void moveBispo(int movimento) { 

  for (int avanco = 0; avanco < movimento; avanco ++) { 

    for (int virada = 0; virada < movimento; virada ++) {

      switch (virada) {

        case 1: printf("Cima e Direita\n"); break;

      }

    }

  }

} 

void moverainha(int movimento){

  while (movimento > 0){

  printf("Esquerda \n");

  movimento --;

  }

} 

void movecavalo(int movimento_completo){ 

  for (int avanco = 0; avanco <= 2 && movimento_completo > 0; avanco ++){ 

    for (int virada = 0; virada <= 1 && movimento_completo > 0; virada ++){ 

      if (avanco == 2 && virada == 1){

        printf(" Cima \n Cima \n Direita \n"); 

        movimento_completo --;

      }

    }

  }

} 



int main() {



  int escolhapeca;



  printf("Vamos movimentar as peças de Xadrez ! \n");

  printf("Primeiro escolha qual peça irá se movimentar: \n 1. Torre \n 2. Bispo \n 3. Rainha \n 4. Cavalo \n"); // Aqui solicito a escolha da peça

  scanf("%d", &escolhapeca);



  switch (escolhapeca){ 

    case 1: 

    movetorre(5);

    break; 

    case 2: 

    moveBispo(5);

    break; 

    case 3: 

    moverainha(8);

    break; 

    case 4:

    movecavalo(1);

    break;

    default:

    printf("Escolha Inválida !\n");

    break; 

  }



  return 0;

}

