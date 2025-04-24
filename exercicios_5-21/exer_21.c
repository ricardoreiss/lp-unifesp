#include <stdio.h>

//Exercício 21
int main(){
    float comprimento_pista, consumo, metros_totais, km_totais, litros;
    int voltas, reabastecimentos;
    printf("Comprimento da pista (m): "); 
    scanf("%f", &comprimento_pista);
    printf("Número de voltas: "); 
    scanf("%i", &voltas);
    printf("Número de reabastecimentos: "); 
    scanf("%i", &reabastecimentos);
    printf("Consumo (Km/L): "); 
    scanf("%f", &consumo);
    
    metros_totais = comprimento_pista * voltas / (reabastecimentos + 1);
    km_totais = metros_totais / 1000;
    litros = km_totais / consumo;
    
    printf("Litros necessários: %.2f\n", litros);
}