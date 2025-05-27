#include <stdio.h>

int main() {
    float altura_chico = 1.50;
    float altura_ze = 1.10;
    int anos = 0;
    
    while(altura_ze <= altura_chico) {
        altura_chico += 0.02;  
        altura_ze += 0.03;     
        anos++;
    }
    
    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);
    printf("Altura final de Chico: %.2f metros\n", altura_chico);
    printf("Altura final de Zé: %.2f metros\n", altura_ze);
} 