#include <stdio.h>

int main() {
    int a, b, maior, mmc;
    
    printf("Digite 5 pares de números para calcular o MMC:\n");
    
    for(int i = 1; i <= 5; i++) {
        printf("\nPar %d:\n", i);
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        
        maior = (a > b) ? a : b;
        
        mmc = maior;
        while(1) {
            if(mmc % a == 0 && mmc % b == 0) {
                break;
            }
            mmc += maior;
        }
        
        printf("MMC = %d\n", mmc);
    }
} 