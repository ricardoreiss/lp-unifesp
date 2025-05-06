#include <stdio.h>

// Exercício 24
int main()
{
    int quantidade;
    float custo_total;
    printf("Digite a quantidade de maçãs compradas: ");
    scanf("%d", &quantidade);
    
    if (quantidade < 12) {
        custo_total = quantidade * 1.30;
    } else {
        custo_total = quantidade * 1.00;
    }
    
    printf("Custo total da compra: R$ %.2f\n", custo_total);
} 