#include <stdio.h>

// Exercício 46
int main()
{
    int codigo_usuario, senha;
    
    printf("Digite o código de usuário: ");
    scanf("%d", &codigo_usuario);
    
    if (codigo_usuario != 1234) {
        printf("Usuário inválido!\n");
    } else {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        
        if (senha != 9999) {
            printf("Senha incorreta\n");
        } else {
            printf("Acesso permitido\n");
        }
    }
} 