#include <stdio.h>

int main() {
    printf("Aproximacao de π pela serie de Leibniz\n");
    printf("======================================\n\n");
    
    double pi = 0.0;
    int sinal = 1;
    double denominador = 1.0;
    
    printf("Termos    Aproximacao π\n");
    printf("-----    -------------\n");
    
    for(int i = 1; i <= 20; i++) {
        pi += sinal * (4.0 / denominador);
        
        printf("%3d      %10.8f\n", i, pi);
        
        sinal *= -1;
        denominador += 2.0;
    }
    
    // Mostra também alguns pontos importantes
    printf("\n...\n");
    
    for(int i = 100; i <= 1000; i += 100) {
        // Calcula π com i termos
        double pi_temp = 0.0;
        int sinal_temp = 1;
        double denom_temp = 1.0;
        
        for(int j = 1; j <= i; j++) {
            pi_temp += sinal_temp * (4.0 / denom_temp);
            sinal_temp *= -1;
            denom_temp += 2.0;
        }
        
        printf("%4d    %10.8f\n", i, pi_temp);
    }
    
    return 0;
}
