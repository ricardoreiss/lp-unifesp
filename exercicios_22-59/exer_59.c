#include <stdio.h>

// Exercício 59
int main()
{
    float angulo1, angulo2, angulo3, soma;
    
    printf("Digite o valor do primeiro ângulo: ");
    scanf("%f", &angulo1);
    printf("Digite o valor do segundo ângulo: ");
    scanf("%f", &angulo2);
    printf("Digite o valor do terceiro ângulo: ");
    scanf("%f", &angulo3);
    
    soma = angulo1 + angulo2 + angulo3;
    
    if (soma != 180.0) {
        printf("Os ângulos informados não formam um triângulo\n");
    } else {
        if (angulo1 == 90.0 || angulo2 == 90.0 || angulo3 == 90.0) {
            printf("Triângulo Retângulo\n");
        } else if (angulo1 > 90.0 || angulo2 > 90.0 || angulo3 > 90.0) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    }
} 