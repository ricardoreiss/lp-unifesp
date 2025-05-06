#include <stdio.h>

// Exercício 26
int main()
{
    int ano_atual, ano_nascimento, idade;
    
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    idade = ano_atual - ano_nascimento;
    
    if (idade >= 16) {
        printf("Pode votar este ano\n");
    } else {
        printf("Não pode votar este ano\n");
    }
} 