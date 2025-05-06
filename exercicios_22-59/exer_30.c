#include <stdio.h>

// Exercício 30
int main()
{
    int horas_trabalhadas;
    float salario_hora, salario_total;
    int horas_semanais = 40;
    int semanas_mes = 4;
    int horas_regulares = horas_semanais * semanas_mes;
    
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%d", &horas_trabalhadas);
    printf("Digite o salário por hora: ");
    scanf("%f", &salario_hora);
    
    if (horas_trabalhadas <= horas_regulares) {
        salario_total = horas_trabalhadas * salario_hora;
    } else {
        int horas_extras = horas_trabalhadas - horas_regulares;
        float valor_hora_extra = salario_hora * 1.5;
        salario_total = (horas_regulares * salario_hora) + (horas_extras * valor_hora_extra);
    }
    
    printf("Salário total: R$ %.2f\n", salario_total);
} 