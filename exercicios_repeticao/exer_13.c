#include <stdio.h>

int main() {
    int n, valor;
    long long fatorial;
    
    printf("Digite quantos valores serão lidos: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("\nDigite o valor %d: ", i);
        scanf("%d", &valor);
        
        fatorial = 1;
        for(int j = 1; j <= valor; j++) {
            fatorial *= j;
        }
        
        printf("Valor: %d\n", valor);
        printf("Fatorial: %lld\n", fatorial);
    }
} 