#include <stdio.h>

// Exercício 53
int main()
{
    int numero;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero <= 0) {
        printf("Por favor, digite um número positivo!\n");
    } else {
        if (numero % 2 == 0) {
            printf("O número %d é PAR\n", numero);
        } else {
            printf("O número %d é ÍMPAR\n", numero);
        }
    }
} 