#include <stdio.h>

// Exercício 34
int main()
{
    int qtd_atual, qtd_maxima, qtd_minima;
    float qtd_media;
    
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &qtd_atual);
    printf("Digite a quantidade máxima em estoque: ");
    scanf("%d", &qtd_maxima);
    printf("Digite a quantidade mínima em estoque: ");
    scanf("%d", &qtd_minima);
    
    qtd_media = (qtd_maxima + qtd_minima) / 2.0;
    printf("Quantidade média: %.2f\n", qtd_media);
    
    if (qtd_atual >= qtd_media) {
        printf("Não efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }
} 