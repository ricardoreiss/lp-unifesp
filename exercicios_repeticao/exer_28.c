#include <stdio.h>

int main() {
    int n;
    float s = 0;
    
    printf("Digite um valor inteiro positivo n: ");
    scanf("%d", &n);
    
    printf("\nTermos da soma:\n");
    for(int i = 1; i <= n; i++) {
        printf("1/%d = %.6f\n", i, 1.0/i);
        s += 1.0/i;
    }
    
    printf("\nValor final de S: %.6f\n", s);
} 