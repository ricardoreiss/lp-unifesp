#include <stdio.h>

// Exercício 27
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%d", &valor2);
    
    if (valor1 > valor2) {
        printf("O maior valor é: %d\n", valor1);
    } else {
        printf("O maior valor é: %d\n", valor2);
    }
} 