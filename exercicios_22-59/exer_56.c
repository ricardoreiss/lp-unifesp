#include <stdio.h>

// Exercício 56
int main()
{
    int valor1, valor2, operacao;
    float resultado;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    
    printf("Digite a operação (1-Adição, 2-Subtração, 3-Divisão, 4-Multiplicação): ");
    scanf("%d", &operacao);
    
    if (operacao == 1) {
        resultado = valor1 + valor2;
        printf("Adição: %d + %d = %.2f\n", valor1, valor2, resultado);
    } else if (operacao == 2) {
        resultado = valor1 - valor2;
        printf("Subtração: %d - %d = %.2f\n", valor1, valor2, resultado);
    } else if (operacao == 3) {
        if (valor2 == 0) {
            printf("Erro: Divisão por zero não é permitida\n");
        } else {
            resultado = (float) valor1 / valor2;
            printf("Divisão: %d / %d = %.2f\n", valor1, valor2, resultado);
        }
    } else if (operacao == 4) {
        resultado = valor1 * valor2;
        printf("Multiplicação: %d * %d = %.2f\n", valor1, valor2, resultado);
    } else {
        printf("Operação inválida! Digite 1, 2, 3 ou 4.\n");
    }
} 