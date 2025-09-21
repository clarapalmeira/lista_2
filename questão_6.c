#include <stdio.h>
#include <string.h>

int main() {
    // Inicialização dos contadores
    int votos_paulo = 0;
    int votos_renata = 0;
    int votos_branco = 0;
    int votos_nulos = 0;
    int total_votos = 0;
    
    int voto;
    char confirmacao;
    char candidato[20];
    
    printf("==================================================\n");
    printf("URNA ELETRONICA - ELEICAO PRESIDENCIAL\n");
    printf("==================================================\n");
    printf("Candidatos:\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em Branco\n");
    printf("Digite um numero negativo para encerrar a votacao\n");
    printf("==================================================\n");
    
    while (1) {
        // Solicita o voto
        printf("\nDigite o numero do candidato: ");
        if (scanf("%d", &voto) != 1) {
            printf("Por favor, digite apenas numeros!\n");
            // Limpa o buffer de entrada
            while (getchar() != '\n');
            continue;
        }
        
        // Verifica se deve encerrar a votação
        if (voto < 0) {
            break;
        }
        
        // Identifica o candidato
        if (voto == 5) {
            strcpy(candidato, "Paulo");
        } else if (voto == 7) {
            strcpy(candidato, "Renata");
        } else if (voto == 0) {
            strcpy(candidato, "BRANCO");
        } else {
            strcpy(candidato, "NULO");
        }
        
        printf("\nVoce votou em: %s\n", candidato);
        printf("Confirmar voto? (S/N): ");
        
        // Limpa o buffer antes de ler o caractere
        while (getchar() != '\n');
        scanf("%c", &confirmacao);
        
        if (confirmacao == 'S' || confirmacao == 's') {
            // Contabiliza o voto
            if (voto == 5) {
                votos_paulo++;
            } else if (voto == 7) {
                votos_renata++;
            } else if (voto == 0) {
                votos_branco++;
            } else {
                votos_nulos++;
            }
            
            total_votos++;
            printf("Voto confirmado com sucesso!\n");
        } else {
            printf("Voto cancelado. Voce pode votar novamente.\n");
        }
    }
    
    // Gera o relatório final
    printf("\n==================================================\n");
    printf("RELATORIO FINAL DA ELEICAO\n");
    printf("==================================================\n");
    printf("Total de votos: %d\n", total_votos);
    printf("--------------------------------------------------\n");
    
    if (total_votos > 0) {
        // Calcula porcentagens
        float perc_paulo = (votos_paulo * 100.0) / total_votos;
        float perc_renata = (votos_renata * 100.0) / total_votos;
        float perc_branco = (votos_branco * 100.0) / total_votos;
        float perc_nulos = (votos_nulos * 100.0) / total_votos;
        
        printf("Paulo (5): %d votos (%.2f%%)\n", votos_paulo, perc_paulo);
        printf("Renata (7): %d votos (%.2f%%)\n", votos_renata, perc_renata);
        printf("Votos em branco: %d votos (%.2f%%)\n", votos_branco, perc_branco);
        printf("Votos nulos: %d votos (%.2f%%)\n", votos_nulos, perc_nulos);
        printf("--------------------------------------------------\n");
        
        // Determina o vencedor
        if (votos_paulo > votos_renata) {
            printf("CANDIDATO ELEITO: PAULO\n");
        } else if (votos_renata > votos_paulo) {
            printf("CANDIDATO ELEITO: RENATA\n");
        } else {
            printf("EMPATE! Nao ha candidato eleito.\n");
        }
    } else {
        printf("Nenhum voto foi computado.\n");
    }
    
    printf("==================================================\n");
    
    return 0;
}
