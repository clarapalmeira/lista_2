#include <stdio.h>

int main() {
    int n, maior, menor;
    int primeiro = 1; // flag para inicializar maior e menor

    printf("Digite numeros inteiros (0 para encerrar):\n");

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break; // condição de parada -> não entra nas comparações
        }

        if (primeiro) {
            maior = menor = n;
            primeiro = 0;
        } else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }

        printf("Maior ate agora: %d | Menor ate agora: %d\n", maior, menor);
    }

    if (primeiro) {
        printf("Nenhum valor valido foi digitado.\n");
    } else {
        printf("\nPrograma encerrado.\n");
        printf("Maior valor final: %d\n", maior);
        printf("Menor valor final: %d\n", menor);
    }

    return 0;
}
