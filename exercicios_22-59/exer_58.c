#include <stdio.h>

// Exercício 58
int main()
{
    float a, b, c;
    
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &c);
    
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores informados não formam um triângulo\n");
    }
} 