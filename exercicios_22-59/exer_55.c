#include <stdio.h>
#include <math.h>

// Exercício 55
int main()
{
    int num_lados;
    float medida_lado, perimetro, area;
    
    printf("Digite o número de lados do polígono regular: ");
    scanf("%d", &num_lados);
    
    if (num_lados < 3) {
        printf("NÃO É UM POLÍGONO\n");
    } else if (num_lados > 5) {
        printf("POLÍGONO NÃO IDENTIFICADO\n");
    } else {
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
        }
    }
} 