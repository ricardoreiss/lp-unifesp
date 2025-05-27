#include <stdio.h>
#include <math.h>

int main() {
    double x, seno = 0, termo;
    int n_termos;
    
    printf("Digite o ângulo em radianos: ");
    scanf("%lf", &x);
    printf("Digite o número de termos da série: ");
    scanf("%d", &n_termos);
    
    for(int i = 0; i < n_termos; i++) {
        double fatorial = 1;
        for(int j = 1; j <= 2*i + 1; j++) {
            fatorial *= j;
        }
        
        termo = pow(-1, i) * pow(x, 2*i + 1) / fatorial;
        seno += termo;
    }
    
    printf("\nSeno(%.2f) = %.6f\n", x, seno);
    printf("Valor real: %.6f\n", sin(x));
} 