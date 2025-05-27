#include <stdio.h>
#include <math.h>

int main() {
    int n_termos;
    double pi = 0;
    
    printf("Digite o número de termos para calcular π: ");
    scanf("%d", &n_termos);
    
    for(int i = 0; i < n_termos; i++) {
        pi += pow(-1, i) / (2*i + 1);
    }
    
    pi *= 4; 
    
    printf("\nπ = %.10f\n", pi);
    printf("Valor real: %.10f\n", M_PI);
} 