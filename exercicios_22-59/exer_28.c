#include <stdio.h>

// Exercício 28
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%d", &valor2);
    
    if (valor1 < valor2) {
        printf("Valores em ordem crescente: %d, %d\n", valor1, valor2);
    } else {
        printf("Valores em ordem crescente: %d, %d\n", valor2, valor1);
    }
} 