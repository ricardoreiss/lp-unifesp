#include <stdio.h>

// Exercício 45
int main()
{
    float kg_morango, kg_maca, preco_morango, preco_maca, valor_total, kg_total;
    
    printf("Digite a quantidade (em Kg) de morangos: ");
    scanf("%f", &kg_morango);
    printf("Digite a quantidade (em Kg) de maçãs: ");
    scanf("%f", &kg_maca);
    
    if (kg_morango <= 5) {
        preco_morango = kg_morango * 2.50;
    } else {
        preco_morango = kg_morango * 2.20;
    }
    
    if (kg_maca <= 5) {
        preco_maca = kg_maca * 1.80;
    } else {
        preco_maca = kg_maca * 1.50;
    }
    
    valor_total = preco_morango + preco_maca;
    kg_total = kg_morango + kg_maca;
    
    if (kg_total > 8 || valor_total > 25.00) {
        valor_total = valor_total * 0.90;
    }
    
    printf("Valor a ser pago: R$ %.2f\n", valor_total);
} 