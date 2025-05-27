#include <stdio.h>
#include <math.h>

int main() {
    double x, exp_x = 0, termo;
    int n_termos;
    
    printf("Digite o valor de x: ");
    scanf("%lf", &x);
    printf("Digite o número de termos da série: ");
    scanf("%d", &n_termos);
    
    for(int i = 0; i < n_termos; i++) {
        double fatorial = 1;
        for(int j = 1; j <= i; j++) {
            fatorial *= j;
        }
        
        termo = pow(x, i) / fatorial;
        exp_x += termo;
    }
    
    printf("\ne^%.2f = %.6f\n", x, exp_x);
    printf("Valor real: %.6f\n", exp(x));
} 