#include <stdio.h>

// Exercício 42
int main()
{
    int x, y;
    int z;
    char resposta;
    
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    
    z = (x * y) + 5;
    
    if (z <= 0) {
        resposta = 'A';
    } else if (z <= 100) {
        resposta = 'B';
    } else {
        resposta = 'C';
    }
    
    printf("Z = %d, Resposta = %c\n", z, resposta);
    
    printf("\nTabela de teste de mesa:\n");
    printf("X = 3, Y = 2 => Z = 11, Resposta = B\n");
    printf("X = 150, Y = 3 => Z = 455, Resposta = C\n");
    printf("X = 7, Y = -1 => Z = -2, Resposta = A\n");
    printf("X = -2, Y = 5 => Z = -5, Resposta = A\n");
    printf("X = 50, Y = 3 => Z = 155, Resposta = C\n");
} 