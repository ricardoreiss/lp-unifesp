#include <stdio.h>

int main() {
    int numero;
    long long produtorio = 1;
    int tem_pares = 0;
    
    printf("Digite números inteiros positivos (0 para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero > 0 && numero % 2 == 0) {
            produtorio *= numero;
            tem_pares = 1;
        }
    } while(numero != 0);
    
    if(tem_pares) {
        printf("\nProdutório dos números pares: %lld\n", produtorio);
    } else {
        printf("\nNenhum número par foi digitado.\n");
    }
} 