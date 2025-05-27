#include <stdio.h>

int main() {
    int n;
    
    printf("Digite 20 valores para calcular suas tabuadas:\n");
    
    for(int i = 1; i <= 20; i++) {
        printf("\nDigite o valor %d: ", i);
        scanf("%d", &n);
        
        printf("\nTabuada do %d:\n", n);
        for(int j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", j, n, j * n);
        }
    }
} 