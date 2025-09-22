#include <stdio.h>

int main() {
    int A, B, inicio, fim;
    int contador = 0;
    
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
    
    printf("\nNumeros divisiveis por 3 entre %d e %d:\n", inicio, fim);
    
    
    for(int i = inicio; i <= fim; i++) {
        if(i % 3 == 0) { 
            printf("%d ", i);
            contador++;
        }
    }
    
    printf("\n\nQuantidade de numeros divisiveis por 3: %d\n", contador);
    
    return 0;
}
