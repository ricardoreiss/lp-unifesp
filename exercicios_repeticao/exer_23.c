#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, maior_idade = 0;
    int mulheres_especificas = 0;
    
    printf("Digite os dados dos habitantes (idade -1 para encerrar):\n");
    
    do {
        printf("\nIdade: ");
        scanf("%d", &idade);
        
        if(idade != -1) {
            printf("Sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Cor dos olhos (A/V/C): ");
            scanf(" %c", &olhos);
            printf("Cor dos cabelos (L/C/P): ");
            scanf(" %c", &cabelos);
            
            if(idade > maior_idade) {
                maior_idade = idade;
            }
            
            if(sexo == 'F' && idade >= 18 && idade <= 35 && 
               olhos == 'V' && cabelos == 'L') {
                mulheres_especificas++;
            }
        }
    } while(idade != -1);
    
    printf("\nResultados da pesquisa:\n");
    printf("Maior idade do grupo: %d anos\n", maior_idade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", 
           mulheres_especificas);
} 