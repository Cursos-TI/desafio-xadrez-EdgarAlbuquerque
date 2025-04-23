#include <stdio.h>

int main() {
    //Movimentando a torre 5 casas
    for (int i = 0; i < 5; i++)
    {
        printf("Cima \n"); //Direção do movimento
    }


    int i = 0;
    //Movimentando o bispo
    while (i <= 5)
    {
        printf("Cima direita \n")
        
        i++;
    }

    int r;
    //Movimentando a rainha pelo menos até 8 casas
    do {
      printf("Digite um numero par \n");
      scanf("%d", &r);

      if(r % 2 == 0){
        printf("%d é par \n", r);
      } else{
        printf("%d é impar \n", r);
      }
      
    } while (r % 2 != 0);

    printf("Voce digitou um numero par chegou ao fim do xadrez \n");

    return 0;
}
