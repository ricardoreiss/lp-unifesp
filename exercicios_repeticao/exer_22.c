#include <stdio.h>

int main() {
    int idade, maior_idade = 0, menor_idade = 999;
    char sexo;
    float salario, soma_salario = 0;
    int total_pessoas = 0;
    int mulheres_salario_baixo = 0;
    
    printf("Digite os dados dos habitantes (idade negativa para encerrar):\n");
    
    do {
        printf("\nIdade: ");
        scanf("%d", &idade);
        
        if(idade >= 0) {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Salário: R$ ");
            scanf("%f", &salario);
            
            if(idade > maior_idade) {
                maior_idade = idade;
            }
            if(idade < menor_idade) {
                menor_idade = idade;
            }
            
            soma_salario += salario;
            total_pessoas++;
            
            if(sexo == 'F' && salario <= 100) {
                mulheres_salario_baixo++;
            }
        }
    } while(idade >= 0);
    
    if(total_pessoas > 0) {
        printf("\nResultados da pesquisa:\n");
        printf("a) Média de salário: R$ %.2f\n", soma_salario/total_pessoas);
        printf("b) Maior idade: %d anos\n", maior_idade);
        printf("   Menor idade: %d anos\n", menor_idade);
        printf("c) Quantidade de mulheres com salário até R$100,00: %d\n", 
               mulheres_salario_baixo);
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }
} 