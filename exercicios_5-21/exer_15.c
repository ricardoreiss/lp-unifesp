#include <stdio.h>

//Exercício 15
int main(){
    float fahrenheit, celsius;
    
    printf("Temperatura em Fahrenheit:");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("Temperatura em Celsius: %.2f\n", celsius);
}