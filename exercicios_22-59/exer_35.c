#include <stdio.h>

// Exercício 35
int main()
{
    int valor;
    
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if (valor > 0) {
        printf("%i é positivo\n", valor);
    } else if (valor < 0) {
        printf("%i é negativo\n", valor);
    } else {
        printf("%i é zero\n", valor);
    }
} 