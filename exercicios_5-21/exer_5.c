#include <stdio.h>

// Exercício 5
int main()
{
    int value;
    printf("Digite um número inteiro:");
    scanf("%i", &value);
    
    printf("Antecessor de %i: %i\n", value, value - 1);
}