#include <stdio.h>

int main() {
    int n;
    float nota, peso, soma_notas = 0, soma_pesos = 0;
    
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("\nNota %d:\n", i);
        printf("Digite a nota: ");
        scanf("%f", &nota);
        printf("Digite o peso: ");
        scanf("%f", &peso);
        
        soma_notas += nota * peso;
        soma_pesos += peso;
    }
    
    printf("\nMédia ponderada: %.2f\n", soma_notas/soma_pesos);
} 