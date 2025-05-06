#include <stdio.h>

// Exercício 25
int main()
{
    float nota1, nota2, media;
    
    printf("Digite a nota da 1a avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da 2a avaliação: ");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    printf("Média: %.2f\n", media);
    
    if (media >= 6.0) {
        printf("Aluno APROVADO\n");
    } else {
        printf("Aluno REPROVADO\n");
    }
} 