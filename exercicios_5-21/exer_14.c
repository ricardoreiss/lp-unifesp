#include <stdio.h>

//Exercício 14
int main(){
    int carros;
    float vendas, salario_fixo, valor_carro, salario_final;
    
    printf("Quantidade de carros vendidos:");
    scanf("%i", &carros);
    printf("Valor total de vendas:");
    scanf("%f", &vendas);
    printf("Salário fixo:");
    scanf("%f", &salario_fixo);
    printf("Valor por carro:");
    scanf("%f", &valor_carro);
    
    salario_final = salario_fixo + (carros * valor_carro) + (vendas * 0.05);
    
    printf("Salário final: %.2f\n", salario_final);
}