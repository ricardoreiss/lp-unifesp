#include <stdio.h>

int main() {
    float viscosidade, condutividade_termica, calor_especifico, densidade;
    float numero_prandtl;
    
    printf("Digite 5 conjuntos de valores para calcular o número de Prandtl:\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nConjunto %d:\n", i);
        printf("Digite a viscosidade dinâmica (kg/m.s): ");
        scanf("%f", &viscosidade);
        printf("Digite a condutividade térmica (W/m.K): ");
        scanf("%f", &condutividade_termica);
        printf("Digite o calor específico (J/kg.K): ");
        scanf("%f", &calor_especifico);
        printf("Digite a densidade (kg/m³): ");
        scanf("%f", &densidade);
        
        numero_prandtl = (viscosidade * calor_especifico) / condutividade_termica;
        
        printf("\nNúmero de Prandtl = %.4f\n", numero_prandtl);
        
        if(numero_prandtl < 1) {
            printf("Fluido com difusividade térmica maior que a viscosidade\n");
        } else if(numero_prandtl == 1) {
            printf("Fluido com difusividade térmica igual à viscosidade\n");
        } else {
            printf("Fluido com difusividade térmica menor que a viscosidade\n");
        }
    }
} 