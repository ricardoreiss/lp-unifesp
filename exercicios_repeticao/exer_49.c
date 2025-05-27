#include <stdio.h>
#include <math.h>

int main() {
    double n, x, x_anterior;
    int iteracoes;
    
    printf("Digite o número para calcular a raiz cúbica: ");
    scanf("%lf", &n);
    printf("Digite o número de iterações: ");
    scanf("%d", &iteracoes);
    
    x = n / 3;
    
    printf("\nIteração\tAproximação\n");
    for(int i = 1; i <= iteracoes; i++) {
        x_anterior = x;
        x = (2*x + n/(x*x)) / 3;
        
        printf("%d\t\t%.6f\n", i, x);
        
        if(fabs(x - x_anterior) < 1e-10) {
            printf("\nConvergiu na iteração %d!\n", i);
            break;
        }
    }
    
    printf("\nRaiz cúbica de %.2f = %.6f\n", n, x);
    printf("Valor real: %.6f\n", cbrt(n));
} 