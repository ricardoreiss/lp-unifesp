#include <stdio.h>
#include <math.h>

// Exercício 54
int main()
{
    int num_lados;
    float medida_lado, perimetro, area;
    
    printf("Digite o número de lados do polígono regular (3, 4 ou 5): ");
    scanf("%d", &num_lados);
    
    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &medida_lado);
    
    if (num_lados == 3) {
        perimetro = 3 * medida_lado;
        printf("TRIÂNGULO\n");
        printf("Perímetro: %.2f cm\n", perimetro);
    } else if (num_lados == 4) {
        area = medida_lado * medida_lado;
        printf("QUADRADO\n");
        printf("Área: %.2f cm²\n", area);
    } else if (num_lados == 5) {
        printf("PENTÁGONO\n");
    } else {
        printf("Número de lados inválido! Digite 3, 4 ou 5.\n");
    }
} 