#include <stdio.h>

int main() {
    int codigo;
    float preco_custo, preco_novo;
    float soma_precos_antigos = 0, soma_precos_novos = 0;
    int total_produtos = 0;
    
    printf("Digite os dados dos produtos (código negativo para encerrar):\n");
    
    do {
        printf("\nCódigo do produto: ");
        scanf("%d", &codigo);
        
        if(codigo >= 0) {
            printf("Preço de custo: R$ ");
            scanf("%f", &preco_custo);
            
            preco_novo = preco_custo * 1.20; 
            
            printf("Preço novo: R$ %.2f\n", preco_novo);
            
            soma_precos_antigos += preco_custo;
            soma_precos_novos += preco_novo;
            total_produtos++;
        }
    } while(codigo >= 0);
    
    if(total_produtos > 0) {
        printf("\nMédia dos preços antigos: R$ %.2f\n", 
               soma_precos_antigos/total_produtos);
        printf("Média dos preços novos: R$ %.2f\n", 
               soma_precos_novos/total_produtos);
    } else {
        printf("\nNenhum produto foi cadastrado.\n");
    }
} 