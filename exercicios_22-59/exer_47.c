#include <stdio.h>

// Exercício 47
int main()
{
    int codigo;
    
    printf("Digite o código de origem do produto: ");
    scanf("%d", &codigo);
    
    if (codigo == 1) {
        printf("Procedência: Sul\n");
    } else if (codigo == 2) {
        printf("Procedência: Norte\n");
    } else if (codigo == 3) {
        printf("Procedência: Leste\n");
    } else if (codigo == 4) {
        printf("Procedência: Oeste\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Procedência: Nordeste\n");
    } else if (codigo == 7 || codigo == 8 || codigo == 9) {
        printf("Procedência: Sudeste\n");
    } else if (codigo == 10) {
        printf("Procedência: Centro-Oeste\n");
    } else if (codigo == 11) {
        printf("Procedência: Noroeste\n");
    } else {
        printf("Procedência: Importado\n");
    }
} 