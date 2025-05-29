#include <stdio.h>

int ehPrimo(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int vetor[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if(ehPrimo(vetor[i])) {
            printf("Numero %d na posicao %d\n", vetor[i], i);
        }
    }
} 