#include <stdio.h>

int main() {
    printf("Fatoriais dos numeros impares (1 a 10):\n");
    printf("---------------------------------------\n");
    
    for(int i = 1; i <= 10; i += 2) {  // Pula de 2 em 2 (apenas ímpares)
        long fat = 1;
        
        for(int j = 1; j <= i; j++) {
            fat *= j;
        }
        
        printf("%d! = %ld\n", i, fat);
    }
    
    return 0;
}
