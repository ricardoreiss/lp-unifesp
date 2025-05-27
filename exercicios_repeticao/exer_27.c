#include <stdio.h>

int main() {
    int valor, maior, menor;
    float soma = 0;
    
    printf("Digite 500 valores inteiros e positivos:\n");
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor);
    maior = menor = valor;
    soma = valor;
    
    for(int i = 2; i <= 500; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        
        if(valor > maior) {
            maior = valor;
        }
        if(valor < menor) {
            menor = valor;
        }
        
        soma += valor;
    }
    
    printf("\nResultados:\n");
    printf("a) Maior valor: %d\n", maior);
    printf("b) Menor valor: %d\n", menor);
    printf("c) Média: %.2f\n", soma/500);
} 