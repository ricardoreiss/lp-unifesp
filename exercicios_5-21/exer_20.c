#include <stdio.h>

//Exercício 20
int main(){
    float km_inicial, km_final, litros, valor_recebido, consumo, lucro;
    printf("Km inicial: "); 
    scanf("%f", &km_inicial);
    printf("Km final: "); 
    scanf("%f", &km_final);
    printf("Litros gastos: "); 
    scanf("%f", &litros);
    printf("Valor recebido: "); 
    scanf("%f", &valor_recebido);
    
    consumo = (km_final - km_inicial) / litros;
    lucro = valor_recebido - (litros * 2.90);
    
    printf("Consumo (Km/L): %.2f\n", consumo);
    printf("Lucro: R$ %.2f\n", lucro);
}