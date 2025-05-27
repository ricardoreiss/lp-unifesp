#include <stdio.h>

int main() {
    int n, eh_primo;
    
    printf("Digite 10 números para verificar se são primos:\n");
    
    for(int i = 1; i <= 10; i++) {
        printf("\nDigite o número %d: ", i);
        scanf("%d", &n);
        
        eh_primo = 1; 
        
        if(n <= 1) {
            eh_primo = 0;
        } else {
            for(int j = 2; j * j <= n; j++) {
                if(n % j == 0) {
                    eh_primo = 0;
                    break;
                }
            }
        }
        
        if(eh_primo) {
            printf("%d é primo\n", n);
        } else {
            printf("%d não é primo\n", n);
        }
    }
} 