#include <stdio.h>

int soma_inteiros(int x) {
    int soma = 0;
    for (int i = 1; i <= x; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int x;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    
    if (x > 0) {
        int resultado = soma_inteiros(x);
        printf("A soma de todos os inteiros de 1 a %d eh: %d\n", x, resultado);
    } else {
        printf("Por favor, digite um numero positivo.\n");
    }
} 