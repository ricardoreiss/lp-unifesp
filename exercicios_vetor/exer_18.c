#include <stdio.h>

int main() {
    int vetor[10], x, cont = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    scanf("%d", &x);
    
    for(int i = 0; i < 10; i++) {
        if(vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            cont++;
        }
    }
    
    printf("\nQuantidade de multiplos: %d", cont);
} 