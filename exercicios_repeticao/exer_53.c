#include <stdio.h>
#include <math.h>

int main() {
    int n_termos;
    double phi = 1, phi_anterior;
    
    printf("Digite o número de iterações para calcular φ: ");
    scanf("%d", &n_termos);
    
    printf("\nIteração\tAproximação\n");
    for(int i = 1; i <= n_termos; i++) {
        phi_anterior = phi;
        phi = sqrt(1 + phi);
        
        printf("%d\t\t%.10f\n", i, phi);
        
        if(fabs(phi - phi_anterior) < 1e-10) {
            printf("\nConvergiu na iteração %d!\n", i);
            break;
        }
    }
    
    printf("\nφ = %.10f\n", phi);
    printf("Valor real: %.10f\n", (1 + sqrt(5))/2);
} 