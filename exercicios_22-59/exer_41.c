#include <stdio.h>

// Exercício 41
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    if (valor1 == valor2) {
        printf("Números iguais\n");
    } else if (valor1 > valor2) {
        printf("Primeiro é maior\n");
    } else {
        printf("Segundo maior\n");
    }
} 