#include <stdio.h>

int main() {
    int numero;
    int intervalo1 = 0;  
    int intervalo2 = 0;  
    int intervalo3 = 0;  
    int intervalo4 = 0;  
    
    printf("Digite números (negativo para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero >= 0) {
            if(numero <= 25) {
                intervalo1++;
            } else if(numero <= 50) {
                intervalo2++;
            } else if(numero <= 75) {
                intervalo3++;
            } else if(numero <= 100) {
                intervalo4++;
            }
        }
    } while(numero >= 0);
    
    printf("\nQuantidade de números em cada intervalo:\n");
    printf("[0,25]: %d\n", intervalo1);
    printf("[26,50]: %d\n", intervalo2);
    printf("[51,75]: %d\n", intervalo3);
    printf("[76,100]: %d\n", intervalo4);
} 