#include <stdio.h>

// Exercício 50
int main()
{
    float nota1, nota2, media;
    
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("Média semestral: %.2f\n", media);
    
    if (media >= 6.0) {
        printf("Você foi aprovado!\n");
    } else {
        printf("Você foi REPROVADO!\n");
    }
} 