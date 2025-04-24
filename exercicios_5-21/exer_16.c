#include <stdio.h>

//Exercício 16
int main(){
    float nota_1, nota_2, nota_3, media;
    
    printf("Nota 1:");
    scanf("%f", &nota_1);
    printf("Nota 2:");
    scanf("%f", &nota_2);
    printf("Nota 3:");
    scanf("%f", &nota_3);
    
    media = ((nota_1 * 2) + (nota_2 * 3) + (nota_3 * 5)) / 10; 
    
    printf("Média Final: %.2f\n", media);
}