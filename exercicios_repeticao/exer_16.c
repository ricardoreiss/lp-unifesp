#include <stdio.h>
#include <math.h>

int main() {
    float valor;
    int contador = 0;
    
    printf("Digite valores (0 para encerrar):\n");
    
    do {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        
        if(valor != 0) {
            if(contador % 20 == 0) {
                printf("\nValor\tQuadrado\tCubo\tRaiz Quadrada\n");
                printf("-----\t--------\t----\t-------------\n");
            }
            
            printf("%.2f\t%.2f\t\t%.2f\t%.2f\n", 
                   valor, 
                   valor * valor, 
                   valor * valor * valor, 
                   sqrt(valor));
            
            contador++;
        }
    } while(valor != 0);
} 