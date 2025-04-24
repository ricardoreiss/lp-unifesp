#include <stdio.h>
#include <math.h>

//Exercício 19
int main(){
    float largura, comprimento, altura, area;
    int quantidade_caixas;
    
    printf("Largura:");
    scanf("%f", &largura);
    printf("Comprimento:");
    scanf("%f", &comprimento);
    printf("Altura:");
    scanf("%f", &altura);
    
    area = 2 * altura * (largura + comprimento);
    quantidade_caixas = ceil(area / 1.5);
    
    printf("Caixas necessárias: %i\n", quantidade_caixas);
}