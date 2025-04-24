#include <stdio.h>

//Exercício 13
int main(){
    float custo_fabrica, custo_final;
    
    printf("Custo de fábrica:");
    scanf("%f", &custo_fabrica);
    
    custo_final = custo_fabrica + (custo_fabrica * 0.28) + (custo_fabrica * 0.45); 
    
    printf("Custo final: %.2f\n", custo_final);
}