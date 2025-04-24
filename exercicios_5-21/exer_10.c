#include <stdio.h>

//Exercício 10
int main(){
    float valor_hora, horas_mes, salario_mes;
    printf("Valor por hora:");
    scanf("%f", &valor_hora);
    printf("Horas trabalhadas no mês:");
    scanf("%f", &horas_mes);
    
    salario_mes = valor_hora * horas_mes;
    
    printf("Salário: R$%.2f\n", salario_mes);
}