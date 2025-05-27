#include <stdio.h>

int main() {
    int base, expoente;
    long long resultado;
    
    printf("Digite 5 pares de valores (base e expoente):\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nPar %d:\n", i);
        printf("Digite a base: ");
        scanf("%d", &base);
        printf("Digite o expoente: ");
        scanf("%d", &expoente);
        
        if(expoente < 0) {
            printf("Expoente negativo não é permitido!\n");
            i--; 
            continue;
        }
        
        resultado = 1;
        for(int j = 1; j <= expoente; j++) {
            resultado *= base;
        }
        
        printf("%d elevado a %d = %lld\n", base, expoente, resultado);
    }
} 