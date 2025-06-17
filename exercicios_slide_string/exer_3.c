#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], busca[100], subst[100], resultado[1000];
    int i = 0, j = 0, k, encontrou;
    
    fgets(str, 1000, stdin);
    fgets(busca, 100, stdin);
    fgets(subst, 100, stdin);
    str[strlen(str) - 1] = '\0';
    busca[strlen(busca) - 1] = '\0';
    subst[strlen(subst) - 1] = '\0';
    
    while(str[i] != '\0') {
        encontrou = 1;
        for(k = 0; busca[k] != '\0'; k++) {
            if(str[i + k] != busca[k]) {
                encontrou = 0;
                break;
            }
        }
        
        if(encontrou) {
            for(k = 0; subst[k] != '\0'; k++) {
                resultado[j++] = subst[k];
            }
            i += strlen(busca);
        } else {
            resultado[j++] = str[i++];
        }
    }
    
    resultado[j] = '\0';
    printf("%s", resultado);
} 