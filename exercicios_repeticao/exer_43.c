#include <stdio.h>

int main() {
    int primeiro_termo, razao, n_termos;
    int termo_atual, soma = 0;
    
    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &primeiro_termo);
    printf("Digite a razão da PG: ");
    scanf("%d", &razao);
    printf("Digite o número de termos: ");
    scanf("%d", &n_termos);
    
    printf("\nTermos da PG:\n");
    termo_atual = primeiro_termo;
    
    for(int i = 1; i <= n_termos; i++) {
        printf("%d", termo_atual);
        if(i < n_termos) {
            printf(", ");
        }
        soma += termo_atual;
        termo_atual *= razao;
    }
    
    printf("\n\nSoma dos termos: %d\n", soma);
} 