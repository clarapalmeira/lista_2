#include <stdio.h>

int main() {
    int numero, temp, digito, contador = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Digitos do numero %d: ", numero);
    
    temp = (numero < 0) ? -numero : numero;  
    
    while(temp > 0) {
        digito = temp % 10;
        printf("%d ", digito);
        
        if(digito == 7) {
            contador++;
        }
        
        temp = temp / 10;
    }
    
    printf("\nEncontrados %d digitos 7\n", contador);
    
    return 0;
}
