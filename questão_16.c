#include <stdio.h>

int main() {
    int soma3 = 0, soma5 = 0;
    
    for(int i = 0; i <= 200; i++) {
        if(i <= 100 && i % 3 == 0) soma3 += i;
        if(i > 100 && i % 5 == 0) soma5 += i;
    }
    
    printf("Somatório divisíveis por 3 [0,100]: %d\n", soma3);
    printf("Somatório divisíveis por 5 ]100,200]: %d\n", soma5);
    
    return 0;
}
