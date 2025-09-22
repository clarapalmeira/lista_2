#include <stdio.h>

int main() {
    int x, y;
    
    printf("DEMONSTRACAO PRE vs POS DECREMENTO\n");
    printf("==================================\n\n");
    
    // Pré-decremento
    x = 5;
    y = --x;
    printf("PRE-DECREMENTO:\n");
    printf("x = 5; y = --x;\n");
    printf("Resultado: x = %d, y = %d\n\n", x, y);
    
  
    x = 5;
    y = x--;
    printf("POS-DECREMENTO:\n");
    printf("x = 5; y = x--;\n");
    printf("Resultado: x = %d, y = %d\n\n", x, y);
    
    return 0;
}
