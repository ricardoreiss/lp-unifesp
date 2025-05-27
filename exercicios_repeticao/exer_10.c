#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;
    
    printf("Digite o código do aluno (negativo para encerrar): ");
    scanf("%d", &codigo);
    
    while(codigo >= 0) {
        printf("Digite as três notas do aluno:\n");
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);
        
        if(nota1 >= nota2 && nota1 >= nota3) {
            media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10;
        } else if(nota2 >= nota1 && nota2 >= nota3) {
            media = (nota2 * 4 + nota1 * 3 + nota3 * 3) / 10;
        } else {
            media = (nota3 * 4 + nota1 * 3 + nota2 * 3) / 10;
        }
        
        printf("\nCódigo do aluno: %d\n", codigo);
        printf("Notas: %.1f, %.1f, %.1f\n", nota1, nota2, nota3);
        printf("Média ponderada: %.2f\n", media);
        printf("Situação: %s\n\n", media >= 5 ? "APROVADO" : "REPROVADO");
        
        printf("Digite o código do próximo aluno (negativo para encerrar): ");
        scanf("%d", &codigo);
    }
} 