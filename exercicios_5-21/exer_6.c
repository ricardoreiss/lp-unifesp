#include <stdio.h>

// Exercício 6
int main()
{
    float base, altura;
    printf("Base:");
    scanf("%f", &base);
    printf("Altura:");
    scanf("%f", &altura);
    
    printf("Área (%.2fX%.2f): %.2f\n", base, altura, base * altura);
}