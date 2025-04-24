#include <stdio.h>
#include <math.h>

//Exercício 17
int main(){
    float raio, area;
    
    printf("Raio:");
    scanf("%f", &raio);
    
    area = raio * raio * M_PI;
    
    printf("Área: %.2f\n", area);
}