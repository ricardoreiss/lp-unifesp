#include <stdio.h>

// Exercício 57
int main()
{
    int a, b, c, temp;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%d", &b);
    
    printf("Digite o terceiro valor (diferente dos anteriores): ");
    scanf("%d", &c);
    
    // Ordenação em ordem decrescente
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    if (b < c) {
        temp = b;
        b = c;
        c = temp;
    }
    
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    
    printf("Valores em ordem decrescente: %d, %d, %d\n", a, b, c);
} 