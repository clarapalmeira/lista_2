#include <stdio.h>

int main() {
    printf("Quadrados dos multiplos de 4 entre 15 e 90:\n\n");
    
    for(int i = 15; i <= 90; i++) {
        if(i % 4 == 0) {  
            int quadrado = i * i;
            printf("%d^2 = %d\n", i, quadrado);
        }
    }
    
    return 0;
}
