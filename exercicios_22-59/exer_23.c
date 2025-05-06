#include <stdio.h>

// Exercício 23
int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if (valor >= 0) {
        printf("%i é positivo\n", valor);
    } else {
        printf("%i é negativo\n", valor);
    }
} 