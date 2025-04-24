#include <stdio.h>

//Exercício 12
int main(){
    float salario_atual, novo_salario, reajuste_percentual;
    
    printf("Salário atual:");
    scanf("%f", &salario_atual);
    printf("Reajuste percentual:");
    scanf("%f", &reajuste_percentual);
    
    novo_salario = salario_atual * (1 + (reajuste_percentual / 100));
    
    printf("Salário após reajuste: %.2f\n", novo_salario);
}