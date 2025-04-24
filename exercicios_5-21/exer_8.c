#include <stdio.h>

//Exercício 8
int main(){
    float metros, centimetros;
    printf("Metros:");
    scanf("%f", &metros);
    
    centimetros = metros * 100;
    printf("%.2fm em centímetros: %.2fcm\n", metros, centimetros);
}