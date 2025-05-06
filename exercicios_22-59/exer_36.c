#include <stdio.h>

// Exercício 36
int main()
{
    int valor1, valor2, valor3, maior;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor (diferente dos anteriores): ");
    scanf("%d", &valor3);
    
    if (valor1 > valor2 && valor1 > valor3) {
        maior = valor1;
    } else if (valor2 > valor1 && valor2 > valor3) {
        maior = valor2;
    } else {
        maior = valor3;
    }
    
    printf("O maior valor é: %d\n", maior);
} 