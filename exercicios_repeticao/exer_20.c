#include <stdio.h>

int main() {
    int numero;
    int soma_negativos = 0;
    
    printf("Digite números inteiros (0 para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero < 0) {
            soma_negativos += numero;
        }
    } while(numero != 0);
    
    printf("\nSomatório dos números negativos: %d\n", soma_negativos);
} 