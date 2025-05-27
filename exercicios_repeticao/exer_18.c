#include <stdio.h>

int main() {
    int m, divisores, fatorial, soma;
    
    printf("Digite valores positivos (negativo para encerrar):\n");
    
    do {
        printf("\nDigite um valor: ");
        scanf("%d", &m);
        
        if(m > 0) {
            if(m % 2 == 0) {
                divisores = 0;
                for(int i = 1; i <= m; i++) {
                    if(m % i == 0) {
                        divisores++;
                    }
                }
                printf("O número %d é par e possui %d divisores.\n", m, divisores);
            } else {
                if(m < 10) {
                    fatorial = 1;
                    for(int i = 1; i <= m; i++) {
                        fatorial *= i;
                    }
                    printf("O número %d é ímpar e seu fatorial é %d.\n", m, fatorial);
                } else {
                    soma = 0;
                    for(int i = 1; i <= m; i++) {
                        soma += i;
                    }
                    printf("O número %d é ímpar e a soma dos inteiros de 1 até %d é %d.\n", 
                           m, m, soma);
                }
            }
        }
    } while(m > 0);
} 