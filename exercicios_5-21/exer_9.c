#include <stdio.h>

//Exercício 9
int main(){
    float lado, area;
    printf("Lado:");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("Dobro da área do quadrado: %.2f\n", 2 * area);
}