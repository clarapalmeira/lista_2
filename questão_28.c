#include <stdio.h>

int main() {
    unsigned char X, Y;
    
    printf("Digite X e Y: ");
    scanf("%hhu %hhu", &X, &Y);
    
    if(Y < 5 || Y > 250) {
        printf("Y deve estar entre 5 e 250\n");
        return 1;
    }
    
    printf("\nX = %d, Y = %d\n", X, Y);
    printf("Escondendo bits de X nos vizinhos de Y...\n\n");
    

    for(int i = 0; i < 8; i++) {
        unsigned char elemento;
        int posicao;
        
        if(i < 4) {
            posicao = Y - 4 + i;
            elemento = posicao;
        } else {
            posicao = Y + 1 + (i - 4);
            elemento = posicao;
        }
        
    
        unsigned char bit_x = (X >> (7 - i)) & 1;
        
     
        elemento = (elemento & 0xFE) | bit_x;
        
        printf("Elemento %d: %d -> %d (bit %d de X = %d)\n", 
               posicao, posicao, elemento, 7-i, bit_x);
    }
    
    return 0;
}
