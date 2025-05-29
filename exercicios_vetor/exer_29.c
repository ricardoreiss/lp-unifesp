#include <stdio.h>

int main() {
    int vetor[6], soma_pares = 0, cont_impares = 0;
    
    for(int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) {
            soma_pares += vetor[i];
        } else {
            cont_impares++;
        }
    }
    
    printf("Numeros pares: ");
    for(int i = 0; i < 6; i++) {
        if(vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\nSoma dos pares: %d\n", soma_pares);
    
    printf("Numeros impares: ");
    for(int i = 0; i < 6; i++) {
        if(vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\nQuantidade de impares: %d", cont_impares);
} 