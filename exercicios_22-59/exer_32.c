#include <stdio.h>

// Exercício 32
int main()
{
    float salario_fixo, valor_vendas, comissao, salario_total;
    
    printf("Digite o salário fixo: R$ ");
    scanf("%f", &salario_fixo);
    printf("Digite o valor das vendas efetuadas: R$ ");
    scanf("%f", &valor_vendas);
    
    if (valor_vendas <= 1500.0) {
        comissao = valor_vendas * 0.03;
    } else {
        comissao = 1500.0 * 0.03 + (valor_vendas - 1500.0) * 0.05;
    }
    
    salario_total = salario_fixo + comissao;
    
    printf("Salário total: R$ %.2f\n", salario_total);
} 