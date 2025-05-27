#include <stdio.h>

int main() {
    int n;
    long long fatorial;
    
    printf("Digite 10 valores para calcular seus fatoriais:\n");
    
    for(int i = 1; i <= 10; i++) {
        printf("\nDigite o valor %d: ", i);
        scanf("%d", &n);
        
        if(n < 0) {
            printf("Não existe fatorial de número negativo!\n");
            continue;
        }
        
        fatorial = 1;
        for(int j = 1; j <= n; j++) {
            fatorial *= j;
        }
        
        printf("Fatorial de %d = %lld\n", n, fatorial);
    }
} 