#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;
    
    for(int i = 0; i < 5; i++) {
        scanf("%f", &vetor[i]);
    }
    
    scanf("%d", &codigo);
    
    if(codigo == 0) {
        return 0;
    }
    else if(codigo == 1) {
        for(int i = 0; i < 5; i++) {
            printf("%.2f ", vetor[i]);
        }
    }
    else if(codigo == 2) {
        for(int i = 4; i >= 0; i--) {
            printf("%.2f ", vetor[i]);
        }
    }
    else {
        printf("Codigo invalido");
    }
} 