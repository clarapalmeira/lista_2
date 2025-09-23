#include <stdio.h>

int main() {
    int a, b, c;
    int contador = 0;
    int limite = 500;
    
    printf("Triplas de Pitagoras Otimizado (limite = %d)\n", limite);
    printf("============================================\n\n");
    
    for(a = 1; a <= limite; a++) {
        for(b = a; b <= limite; b++) {  
            int c_quadrado = a * a + b * b;
            c = 1;
            
            
            while(c * c <= c_quadrado && c <= limite) {
                if(c * c == c_quadrado) {
                    contador++;
                    printf("%3d. (%3d, %3d, %3d)\n", contador, a, b, c);
                    break; 
                }
                c++;
            }
        }
    }
    
    printf("\nTotal: %d triplas\n", contador);
    
    return 0;
}
