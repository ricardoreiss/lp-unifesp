#include <stdio.h>

int main() {
    int n_termos;
    double e = 0, fatorial;
    
    printf("Digite o número de termos para calcular e: ");
    scanf("%d", &n_termos);
    
    for(int i = 0; i < n_termos; i++) {
        fatorial = 1;
        for(int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        
        e += 1.0 / fatorial;
    }
    
    printf("\ne = %.10f\n", e);
} 