#include <stdio.h>

int main() {
    unsigned long long graos = 1;
    unsigned long long total = 1;
    
    for(int i = 2; i <= 64; i++) {
        graos *= 2;
        total += graos;
    }
    
    printf("Total de grãos de trigo no tabuleiro: %llu\n", total);
    
    return 0;
}
