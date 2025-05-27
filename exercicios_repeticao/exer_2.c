#include <stdio.h>

int main() {
    int n;
    float e = 1.0;
    float fatorial = 1.0;
    
    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        fatorial *= i;
        e += 1.0/fatorial;
    }
    
    printf("O valor de E é: %.6f\n", e);
} 