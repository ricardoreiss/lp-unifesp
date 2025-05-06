#include <stdio.h>

// Exercício 22
int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    
    if (valor > 10) {
        printf("É maior que 10!\n");
    } else {
        printf("NÃO é maior que 10!\n");
    }
} 