#include <stdio.h>

int main() {
    int a, contador_negativos = 0;
    
    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &a);
        
        if(a < 0) contador_negativos++;
        
    }
    
    printf("\nQuantidade de valores negativos: %d\n", contador_negativos);
} 