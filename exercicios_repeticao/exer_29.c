#include <stdio.h>

int main() {
    int numero;
    float soma = 0;
    int contador = 0;
    
    printf("Digite números (0 para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero >= 13 && numero <= 73) {
            soma += numero;
            contador++;
        }
    } while(numero != 0);
    
    if(contador > 0) {
        printf("\nMédia aritmética dos números entre 13 e 73: %.2f\n", 
               soma/contador);
    } else {
        printf("\nNenhum número no intervalo foi digitado.\n");
    }
} 