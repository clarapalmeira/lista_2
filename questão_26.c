#include <stdio.h>

int main() {
    printf("Tabela de Conversao (1-256)\n");
    printf("===========================\n\n");
    
    printf("%-8s %-12s %-8s %-12s\n", 
           "Decimal", "Binario", "Octal", "Hexadecimal");
    printf("-------- ------------ -------- ------------\n");
    
    for(int i = 1; i <= 256; i++) {
       
        printf("%-8d ", i);
        
       
        for(int j = 7; j >= 0; j--) {
            printf("%d", (i >> j) & 1);
            if(j == 4) printf(" ");
        }
        
        printf(" %-8o %-12X\n", i, i);
        
    
        if(i % 16 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
