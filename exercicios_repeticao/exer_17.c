#include <stdio.h>

int main() {
    int m, n, soma;
    
    printf("Digite pares de valores m,n (m negativo para encerrar):\n");
    
    do {
        printf("\nDigite o valor de m: ");
        scanf("%d", &m);
        
        if(m >= 0) {
            printf("Digite o valor de n: ");
            scanf("%d", &n);
            
            if(n > 0) {
                soma = 0;
                for(int i = m; i < m + n; i++) {
                    soma += i;
                }
                
                printf("Soma dos %d inteiros consecutivos a partir de %d: %d\n", 
                       n, m, soma);
            } else {
                printf("O valor de n deve ser positivo!\n");
            }
        }
    } while(m >= 0);
} 