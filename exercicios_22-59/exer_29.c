#include <stdio.h>

// Exercício 29
int main()
{
    int hora_inicio, hora_fim, duracao;
    
    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &hora_inicio);
    printf("Digite a hora de fim do jogo (0-23): ");
    scanf("%d", &hora_fim);
    
    if (hora_fim >= hora_inicio) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = 24 - hora_inicio + hora_fim;
    }
    
    printf("Duração do jogo: %d horas\n", duracao);
} 