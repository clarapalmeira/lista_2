#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5;
    
    printf("Digite numero de 5 digitos: ");
    scanf("%d", &num);
    
    if(num < 10000 || num > 99999) {
        printf("Numero deve ter 5 digitos!\n");
        return 1;
    }
    
    // Extrai dígitos
    d1 = num / 10000;
    d2 = (num / 1000) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 10) % 10;
    d5 = num % 10;
    
    // Verifica palíndromo
    if(d1 == d5 && d2 == d4) {
        printf("%d -> PALINDROMO\n", num);
    } else {
        printf("%d -> NAO E PALINDROMO\n", num);
    }
    
    return 0;
}
