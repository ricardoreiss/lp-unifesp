#include <stdio.h>

int main() {
    float valor, soma = 0;
    int total_valores = 0;
    int positivos = 0, negativos = 0;
    
    printf("Digite valores (0 para encerrar):\n");
    
    do {
        printf("Digite um valor: ");
        scanf("%f", &valor);
        
        if(valor != 0) {
            soma += valor;
            total_valores++;
            
            if(valor > 0) {
                positivos++;
            } else {
                negativos++;
            }
        }
    } while(valor != 0);
    
    if(total_valores > 0) {
        printf("\nResultados:\n");
        printf("Média aritmética: %.2f\n", soma/total_valores);
        printf("Quantidade de valores positivos: %d\n", positivos);
        printf("Quantidade de valores negativos: %d\n", negativos);
        printf("Percentual de valores positivos: %.2f%%\n", 
               (float)positivos/total_valores * 100);
        printf("Percentual de valores negativos: %.2f%%\n", 
               (float)negativos/total_valores * 100);
    } else {
        printf("\nNenhum valor foi digitado.\n");
    }
} 