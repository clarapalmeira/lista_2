#include <stdio.h>

int main() {
    int votos_paulo = 0, votos_renata = 0, votos_branco = 0, votos_nulos = 0;
    int total_votos = 0;
    int voto;
    char confirmacao;
    
    printf("URNA ELETRONICA\n");
    printf("5 - Paulo\n");
    printf("7 - Renata\n");
    printf("0 - Voto em branco\n");
    printf("Digite numero negativo para encerrar\n\n");
    
    while(1) {
        printf("Digite o numero do candidato: ");
        scanf("%d", &voto);
        
        if(voto < 0) {
            break;
        }
        
        // Mostra em quem o usuário votou
        if(voto == 5) {
            printf("Voce votou em: Paulo\n");
        } else if(voto == 7) {
            printf("Voce votou em: Renata\n");
        } else if(voto == 0) {
            printf("Voce votou em: BRANCO\n");
        } else {
            printf("Voce votou em: NULO\n");
        }
        
        // Confirmação do voto
        printf("Confirmar voto? (S/N): ");
        scanf(" %c", &confirmacao);
        
        if(confirmacao == 'S' || confirmacao == 's') {
            if(voto == 5) {
                votos_paulo++;
            } else if(voto == 7) {
                votos_renata++;
            } else if(voto == 0) {
                votos_branco++;
            } else {
                votos_nulos++;
            }
            total_votos++;
            printf("Voto confirmado!\n\n");
        } else {
            printf("Voto cancelado.\n\n");
        }
    }
    
    // Relatório final
    printf("\nRELATORIO FINAL:\n");
    printf("Total de votos: %d\n", total_votos);
    
    if(total_votos > 0) {
        printf("Paulo: %d votos (%.1f%%)\n", votos_paulo, (votos_paulo * 100.0) / total_votos);
        printf("Renata: %d votos (%.1f%%)\n", votos_renata, (votos_renata * 100.0) / total_votos);
        printf("Brancos: %d votos (%.1f%%)\n", votos_branco, (votos_branco * 100.0) / total_votos);
        printf("Nulos: %d votos (%.1f%%)\n", votos_nulos, (votos_nulos * 100.0) / total_votos);
        
        // Verifica o vencedor
        if(votos_paulo > votos_renata) {
            printf("ELEITO: PAULO\n");
        } else if(votos_renata > votos_paulo) {
            printf("ELEITO: RENATA\n");
        } else {
            printf("EMPATE!\n");
        }
    }
    
    return 0;
}
