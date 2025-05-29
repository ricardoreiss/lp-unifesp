#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], vetor3[20];
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }
    
    for(int i = 0; i < 20; i++) {
        if(i % 2 == 0) {
            vetor3[i] = vetor1[i/2];
        } else {
            vetor3[i] = vetor2[i/2];
        }
        printf("%d ", vetor3[i]);
    }
} 