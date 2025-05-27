#include <stdio.h>

int main() {
    int valor, soma = 0, contador = 0;
    float media;
    
    printf("Digite valores positivos (negativo para encerrar):\n");
    
    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        if(valor >= 0) {
            soma += valor;
            contador++;
        }
    } while(valor >= 0);
    
    if(contador > 0) {
        media = (float)soma / contador;
        printf("\nMédia aritmética: %.2f\n", media);
    } else {
        printf("\nNenhum valor positivo foi digitado.\n");
    }
} 