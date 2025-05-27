#include <stdio.h>

int main() {
    int voto;
    int votos_candidato[4] = {0};  
    int votos_nulos = 0;
    int votos_brancos = 0;
    
    printf("Digite o código do voto (0 para encerrar):\n");
    printf("1,2,3,4 = voto para os respectivos candidatos\n");
    printf("5 = voto nulo\n");
    printf("6 = voto em branco\n\n");
    
    do {
        printf("Digite o código do voto: ");
        scanf("%d", &voto);
        
        switch(voto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votos_candidato[voto-1]++;
                break;
            case 5:
                votos_nulos++;
                break;
            case 6:
                votos_brancos++;
                break;
            case 0:
                break;
            default:
                printf("Código inválido!\n");
        }
    } while(voto != 0);
    
    printf("\nResultado da eleição:\n");
    for(int i = 0; i < 4; i++) {
        printf("Candidato %d: %d votos\n", i+1, votos_candidato[i]);
    }
    printf("Votos nulos: %d\n", votos_nulos);
    printf("Votos em branco: %d\n", votos_brancos);
} 