#include <stdio.h>

// Exercício 7
int main()
{
    int anos, meses, dias, total_dias;
    printf("Anos:");
    scanf("%i", &anos);
    printf("Meses:");
    scanf("%i", &meses);
    printf("Dias:");
    scanf("%i", &dias);
    
    total_dias = (anos * 365) + (meses * 30) + dias;
    
    printf("Total de dias: %i dias\n", total_dias);
}