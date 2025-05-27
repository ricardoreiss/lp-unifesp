#include <stdio.h>
#include <math.h>

int main() {
    double n, x, x_anterior;
    int indice, iteracoes;
    
    printf("Digite o número para calcular a raiz: ");
    scanf("%lf", &n);
    printf("Digite o índice da raiz: ");
    scanf("%d", &indice);
    
    if(indice <= 0) {
        printf("Erro: o índice deve ser positivo!\n");
        return 1;
    }
    
    if(indice % 2 == 0 && n < 0) {
        printf("Erro: não existe raiz de índice par para número negativo!\n");
        return 1;
    }
    
    printf("Digite o número de iterações: ");
    scanf("%d", &iteracoes);
    
    x = n / indice;
    
    printf("\nIteração\tAproximação\n");
    for(int i = 1; i <= iteracoes; i++) {
        x_anterior = x;
        x = ((indice-1)*x + n/pow(x, indice-1)) / indice;
        
        printf("%d\t\t%.6f\n", i, x);
        
        if(fabs(x - x_anterior) < 1e-10) {
            printf("\nConvergiu na iteração %d!\n", i);
            break;
        }
    }
    
    printf("\nRaiz %d-ésima de %.2f = %.6f\n", indice, n, x);
    printf("Valor real: %.6f\n", pow(n, 1.0/indice));
} 