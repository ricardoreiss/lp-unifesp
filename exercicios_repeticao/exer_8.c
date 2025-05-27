#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;
    
    printf("Digite números (0 para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero != 0 && numero % 2 == 0) {
            soma += numero;
            contador++;
        }
    } while(numero != 0);
    
    if(contador > 0) {
        media = (float)soma / contador;
        printf("\nMédia dos números pares: %.2f\n", media);
    } else {
        printf("\nNenhum número par foi digitado.\n");
    }
} 