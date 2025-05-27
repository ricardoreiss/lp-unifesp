#include <stdio.h>

int main() {
    int numero;
    int pares = 0, impares = 0;
    float soma_pares = 0, soma_geral = 0;
    int total = 0;
    
    printf("Digite números positivos (0 para encerrar):\n");
    
    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        if(numero != 0) {
            soma_geral += numero;
            total++;
            
            if(numero % 2 == 0) {
                pares++;
                soma_pares += numero;
            } else {
                impares++;
            }
        }
    } while(numero != 0);
    
    if(total > 0) {
        printf("\nResultados:\n");
        printf("Quantidade de números pares: %d\n", pares);
        printf("Quantidade de números ímpares: %d\n", impares);
        
        if(pares > 0) {
            printf("Média dos valores pares: %.2f\n", soma_pares/pares);
        } else {
            printf("Não foram digitados números pares.\n");
        }
        
        printf("Média geral: %.2f\n", soma_geral/total);
    } else {
        printf("\nNenhum número foi digitado.\n");
    }
} 