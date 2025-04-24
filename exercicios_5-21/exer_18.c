#include <stdio.h>
#include <math.h>

//Exercício 18
int main(){
    float largura, comprimento, area, potencia;
    int quantidade_lampadas;
    
    printf("Largura:");
    scanf("%f", &largura);
    printf("Comprimento:");
    scanf("%f", &comprimento);
    printf("Potência da lâmpada:");
    scanf("%f", &potencia);
    
    area = largura * comprimento;
    quantidade_lampadas = ceil(18 * area / potencia);
    
    printf("Lâmpadas necessárias: %i\n", quantidade_lampadas);
}