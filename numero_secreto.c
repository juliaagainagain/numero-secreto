#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    printf(" ___________________________\n");
    printf("|                           |\n");
    printf("|     ADIVINHE O NUMERO     |\n");
    printf("|        (um a cem)         |\n");
    printf("|      (numero inteiro)     |\n");
    printf("|___________________________|\n\n");
    
    
    //gerador de numeros aleatarios com base no tempo
    srand(time(NULL));

    // aleatorio entre 1 e 100
    int numero_secreto = rand() % 100 + 1;
    int chute;
	  
    do {
        printf("Tente adivinhar o numero sabendo que ele e inteiro >> ");
        scanf("%d", &chute);

        if (chute == numero_secreto) {
            printf("VOCE ACERTOU :)\n");
        } else if (chute < numero_secreto) {
            printf("Esse numero ainda esta pequeno, chute mais alto\n");
        } else {
            printf("Esse numero ainda esta alto, chute mais baixo\n");
        }

    } while (numero_secreto != chute);

    return 0;
}

