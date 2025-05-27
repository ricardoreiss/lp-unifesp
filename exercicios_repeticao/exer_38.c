#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo;
    
    printf("Digite quantos termos da sequência Fibonacci deseja ver: ");
    scanf("%d", &n);
    
    printf("\nSequência Fibonacci:\n");
    
    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d", primeiro);
        } else if(i == 2) {
            printf(", %d", segundo);
        } else {
            proximo = primeiro + segundo;
            printf(", %d", proximo);
            primeiro = segundo;
            segundo = proximo;
        }
    }
    printf("\n");
} 