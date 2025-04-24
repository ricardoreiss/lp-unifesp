#include <stdio.h>

//Exercício 11
int main(){
    int eleitores, v_brancos, v_nulos, v_validos;
    float porcentagem;
    
    printf("Quantidade de eleitores:");
    scanf("%i", &eleitores);
    printf("Quantidade de votos brancos:");
    scanf("%i", &v_brancos);
    printf("Quantidade de votos nulos:");
    scanf("%i", &v_nulos);
    printf("Quantidade de votos válidos:");
    scanf("%i", &v_validos);
    
    porcentagem = 100.0 / eleitores;
    
    printf("Porcentagem de votos brancos: %.2f\n", v_brancos * porcentagem);
    printf("Porcentagem de votos nulos: %.2f\n", v_nulos * porcentagem);
    printf("Porcentagem de votos válidos: %.2f\n", v_validos * porcentagem);
}