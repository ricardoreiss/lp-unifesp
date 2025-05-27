#include <stdio.h>

int main() {
    int codigo;
    float nota1, nota2, nota3, media;
    
    printf("Digite o código do aluno (0 para encerrar): ");
    scanf("%d", &codigo);
    
    while(codigo != 0) {
        printf("Digite as três notas do aluno:\n");
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);
        
        media = (nota1 + nota2 + nota3) / 3;
        
        printf("\nCódigo do aluno: %d\n", codigo);
        printf("Média: %.2f\n\n", media);
        
        printf("Digite o código do próximo aluno (0 para encerrar): ");
        scanf("%d", &codigo);
    }
} 