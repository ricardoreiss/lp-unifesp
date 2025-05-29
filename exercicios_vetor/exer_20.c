#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], j = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
        if(vetor1[i] % 2 != 0) {
            vetor2[j] = vetor1[i];
            j++;
        }
    }
    
    for(int i = 0; i < 10; i += 2) {
        printf("%d %d\n", vetor1[i], vetor1[i+1]);
    }
    
    for(int i = 0; i < j; i += 2) {
        if(i + 1 < j) {
            printf("%d %d\n", vetor2[i], vetor2[i+1]);
        } else {
            printf("%d\n", vetor2[i]);
        }
    }
} 