#include <stdio.h>

// Exercício 52
int main()
{
    float altura, peso_ideal;
    int sexo;
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o sexo (1-feminino 2-masculino): ");
    scanf("%d", &sexo);
    
    if (sexo == 1) {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulher com %.2fm de altura: %.2f kg\n", altura, peso_ideal);
    } else if (sexo == 2) {
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal para homem com %.2fm de altura: %.2f kg\n", altura, peso_ideal);
    } else {
        printf("Código de sexo inválido!\n");
    }
} 