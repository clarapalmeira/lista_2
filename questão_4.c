#include <stdio.h>

int main() {
    unsigned J = 150; 
    unsigned P = 110; 
    int anos = 0;   // melhor usar int

    while (P <= J) {   // até Pedro ser maior que José
        anos++;
        J += 2;
        P += 3;
    }

    printf("A quantidade de anos que se passaram até Pedro ser maior que José é %d\n", anos);

    return 0;
}
