#include <stdio.h>

// Exercício 37
int main()
{
    int a, b, c, soma;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%d", &b);
    printf("Digite o terceiro valor (diferente dos anteriores): ");
    scanf("%d", &c);
    
    if (a < b && a < c) {
        soma = b + c;
    } else if (b < a && b < c) {
        soma = a + c;
    } else {
        soma = a + b;
    }
    
    printf("A soma dos dois maiores valores é: %d\n", soma);
} 