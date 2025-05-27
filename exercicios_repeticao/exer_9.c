#include <stdio.h>

int main() {
    int valor, maior, menor;
    
    printf("Digite 50 valores:\n");
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor);
    maior = menor = valor;
    
    for(int i = 2; i <= 50; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        
        if(valor > maior) {
            maior = valor;
        }
        if(valor < menor) {
            menor = valor;
        }
    }
    
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
} 