#include <stdio.h>

// Exercício 39
int main()
{
    float a, b, c;
    
    printf("Digite o valor do lado A: ");
    scanf("%f", &a);
    printf("Digite o valor do lado B: ");
    scanf("%f", &b);
    printf("Digite o valor do lado C: ");
    scanf("%f", &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        printf("Os valores formam um triângulo\n");
    } else {
        printf("Os valores não formam um triângulo\n");
    }
} 