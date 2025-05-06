#include <stdio.h>

// Exercício 48
int main()
{
    float nota1, nota2, optativa, media;
    
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &nota2);
    printf("Digite a nota da avaliação optativa (-1 se não fez): ");
    scanf("%f", &optativa);
    
    if (optativa == -1) {
        media = (nota1 + nota2) / 2;
    } else {
        if (nota1 < nota2) {
            media = (optativa + nota2) / 2;
        } else {
            media = (nota1 + optativa) / 2;
        }
    }
    
    printf("Média: %.2f\n", media);
    
    if (media >= 6.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situação: Exame\n");
    } else {
        printf("Situação: Reprovado\n");
    }
} 