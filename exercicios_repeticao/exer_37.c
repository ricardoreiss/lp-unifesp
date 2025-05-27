#include <stdio.h>

int main() {
    float capital, taxa, montante;
    int tempo;
    
    printf("Digite o capital inicial: R$ ");
    scanf("%f", &capital);
    printf("Digite a taxa de juros (em %%): ");
    scanf("%f", &taxa);
    printf("Digite o tempo (em meses): ");
    scanf("%d", &tempo);
    
    taxa = taxa / 100; 
    montante = capital;
    
    printf("\nMês\tMontante\n");
    for(int i = 1; i <= tempo; i++) {
        montante = montante * (1 + taxa);
        printf("%d\tR$ %.2f\n", i, montante);
    }
} 