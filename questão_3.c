#include <stdio.h>

int main() {
    int F;
    int x = 1;
    int i = 1;

    printf("Digite um número inteiro e positivo F: ");
    scanf("%d", &F);

    if (F < 0) {
        printf("Número inválido. Digite um número inteiro positivo.\n");
        return 1;
    }

    while (i <= F) {
        x = x * i;
        i++;
    }

    printf("O fatorial de %d é: %d\n", F, x);

    return 0;
}
