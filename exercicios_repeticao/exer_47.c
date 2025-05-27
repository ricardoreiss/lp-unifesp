#include <stdio.h>
#include <math.h>

int main() {
    double x, ln_x = 0, termo;
    int n_termos;
    
    printf("Digite o valor de x (0 < x < 2): ");
    scanf("%lf", &x);
    
    if(x <= 0 || x >= 2) {
        printf("Erro: x deve estar entre 0 e 2!\n");
        return 1;
    }
    
    printf("Digite o número de termos da série: ");
    scanf("%d", &n_termos);
    
    for(int i = 1; i <= n_termos; i++) {
        termo = pow(-1, i+1) * pow(x-1, i) / i;
        ln_x += termo;
    }
    
    printf("\nln(%.2f) = %.6f\n", x, ln_x);
    printf("Valor real: %.6f\n", log(x));
} 