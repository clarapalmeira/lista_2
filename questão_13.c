#include <stdio.h>

int main() {
    int A, B, inicio, fim;
    int soma = 0;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    
    if(A < B) {
        inicio = A;
        fim = B;
    } else {
        inicio = B;
        fim = A;
    }
    
    printf("\nNumeros pares entre %d e %d:\n", inicio, fim);
    
   
    for(int i = inicio; i <= fim; i++) {
        if(i % 2 == 0) { 
            printf("%d ", i);
            soma += i;
        }
    }
    
    printf("\n\nSomatório dos numeros pares: %d\n", soma);
    
    return 0;
}
