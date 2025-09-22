#include <stdio.h>

int main() {
    int base = 3;
    long resultado = 1;  
    
    printf("Potências de 3 elevado aos expoentes de 0 a 7:\n\n");
    
    for(int expoente = 0; expoente <= 7; expoente++) {
        printf("3^%d = %ld\n", expoente, resultado);
        resultado *= base;  
    }
    
    return 0;
}
