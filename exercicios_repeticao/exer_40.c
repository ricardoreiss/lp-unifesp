#include <stdio.h>

int main() {
    int a, b, resto;
    
    printf("Digite 5 pares de números para calcular o MDC:\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nPar %d:\n", i);
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        
        while(b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }
        
        printf("MDC = %d\n", a);
    }
} 