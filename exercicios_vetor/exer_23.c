#include <stdio.h>

int main() {
    float vetor1[5], vetor2[5], produto = 0;
    
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vetor1[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vetor2[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        produto += vetor1[i] * vetor2[i];
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", vetor1[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");
    
    printf("Produto escalar: %.2f", produto);
} 