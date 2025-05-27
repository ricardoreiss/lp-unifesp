#include <stdio.h>

int main() {
    float velocidade, diametro, viscosidade, densidade;
    float numero_reynolds;
    
    printf("Digite 5 conjuntos de valores para calcular o número de Reynolds:\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nConjunto %d:\n", i);
        printf("Digite a velocidade do fluido (m/s): ");
        scanf("%f", &velocidade);
        printf("Digite o diâmetro do tubo (m): ");
        scanf("%f", &diametro);
        printf("Digite a viscosidade dinâmica (kg/m.s): ");
        scanf("%f", &viscosidade);
        printf("Digite a densidade do fluido (kg/m³): ");
        scanf("%f", &densidade);
        
        numero_reynolds = (densidade * velocidade * diametro) / viscosidade;
        
        printf("\nNúmero de Reynolds = %.2f\n", numero_reynolds);
        
        if(numero_reynolds < 2300) {
            printf("Regime laminar\n");
        } else if(numero_reynolds < 4000) {
            printf("Regime de transição\n");
        } else {
            printf("Regime turbulento\n");
        }
    }
} 