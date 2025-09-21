#include <stdio.h>

int main() {
    float num1, num2, resultado;
    
    printf("Digite o primeiro numero (dividendo): ");
    scanf("%f", &num1);
    

    do {
        printf("Digite o segundo numero (divisor - nao pode ser zero): ");
        scanf("%f", &num2);
        
        if(num2 == 0) {
            printf("ERRO: O divisor nao pode ser zero! Tente novamente.\n");
        }
    } while(num2 == 0);
    

    resultado = num1 / num2;
    

    printf("\nResultado da divisao: %.2f / %.2f = %.2f\n", num1, num2, resultado);
    
    return 0;
}
