#include <stdio.h>

int main() {
    int n, a1, r;
    int termo, soma = 0;
    
    printf("Digite o número de termos (n): ");
    scanf("%d", &n);
    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Digite a razão (r): ");
    scanf("%d", &r);
    
    printf("\nProgressão Aritmética:\n");
    
    for(int i = 0; i < n; i++) {
        termo = a1 + (i * r);
        printf("Termo %d: %d\n", i+1, termo);
        soma += termo;
    }
    
    printf("\nSoma dos termos: %d\n", soma);
} 