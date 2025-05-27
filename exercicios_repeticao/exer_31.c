#include <stdio.h>

int main() {
    int valor;
    int dentro = 0, fora = 0;
    
    printf("Digite 10 valores:\n");
    
    for(int i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);
        
        if(valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }
    
    printf("\nQuantidade de valores no intervalo [10,20]: %d\n", dentro);
    printf("Quantidade de valores fora do intervalo [10,20]: %d\n", fora);
} 