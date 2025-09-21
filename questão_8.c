#include <stdio.h>

int main() {
    float valor_mercadoria;
    int prestacao;
    float entrada;
    
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &valor_mercadoria);
    
    // Calcula o valor máximo inteiro para a prestação
    // A entrada deve ser >= prestação, então a prestação deve ser <= valor/3
    prestacao = (int)(valor_mercadoria / 3);
    
    // Calcula a entrada: valor total - 2 prestações
    entrada = valor_mercadoria - (2 * prestacao);
    
    // Exibe os resultados
    printf("\nValor da mercadoria: R$ %.2f\n", valor_mercadoria);
    printf("Entrada: R$ %.2f\n", entrada);
    printf("Duas prestacoes de: R$ %d,00\n", prestacao);
    printf("Total: R$ %.2f\n", entrada + (2 * prestacao));
    
    return 0;
}
