#include <stdio.h>

int main() {
    int A, B, i, soma = 0, count = 0;
    
    printf("Digite dois numeros: ");
    scanf("%d %d", &A, &B);
    

    if(A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    
 
    for(i = A; i <= B; i++) {
        soma += i;
        count++;
    }
    
    printf("Media dos numeros entre %d e %d: %.2f\n", A, B, (float)soma/count);
    
    return 0;
}
