#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite 5 pares de valores (a < b):\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nPar %d:\n", i);
        printf("Digite o valor de a: ");
        scanf("%d", &a);
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        
        if(a < b) {
            printf("Números pares entre %d e %d:\n", a, b);
            for(int j = a; j <= b; j++) {
                if(j % 2 == 0) {
                    printf("%d\n", j);
                }
            }
        } else {
            printf("Erro: a deve ser menor que b!\n");
            i--; 
        }
    }
} 