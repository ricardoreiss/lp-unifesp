#include <stdio.h>

int main() {
    float salario, soma_salario = 0, maior_salario = 0;
    int num_filhos, soma_filhos = 0;
    int total_pessoas = 0;
    int pessoas_salario_baixo = 0;
    
    printf("Digite o salário (negativo para encerrar): ");
    scanf("%f", &salario);
    
    while(salario >= 0) {
        printf("Digite o número de filhos: ");
        scanf("%d", &num_filhos);
        
        soma_salario += salario;
        soma_filhos += num_filhos;
        total_pessoas++;
        
        if(salario > maior_salario) {
            maior_salario = salario;
        }
        
        if(salario <= 100) {
            pessoas_salario_baixo++;
        }
        
        printf("\nDigite o salário (negativo para encerrar): ");
        scanf("%f", &salario);
    }
    
    if(total_pessoas > 0) {
        printf("\nResultados da pesquisa:\n");
        printf("a) Média do salário: R$ %.2f\n", soma_salario/total_pessoas);
        printf("b) Média do número de filhos: %.2f\n", (float)soma_filhos/total_pessoas);
        printf("c) Maior salário: R$ %.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", 
               (float)pessoas_salario_baixo/total_pessoas * 100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }
} 