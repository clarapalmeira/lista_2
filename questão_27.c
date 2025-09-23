#include <stdio.h>

int main() {
    int num, maior, menor, primeiro = 1;
    
    printf("Digite numeros (negativo par para sair):\n");
    
    while(1) {
        scanf("%d", &num);
        
        
        if(num < 0 && num % 2 == 0) break;
        
        if(primeiro) {
            maior = menor = num;
            primeiro = 0;
        } else {
            if(num > maior) maior = num;
            if(num < menor) menor = num;
        }
    }
    
    if(!primeiro) {
        printf("Produto: %d × %d = %d\n", maior, menor, maior * menor);
    } else {
        printf("Nenhum numero valido.\n");
    }
    
    return 0;
}
