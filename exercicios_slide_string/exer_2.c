#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], resultado[200];
    int i = 0, j = 0, k = 0;

    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin); 
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';
    
    while(str1[i] != '\0' || str2[j] != '\0') {
        if(str1[i] != '\0') {
            resultado[k++] = str1[i++];
        }
        if(str2[j] != '\0') {
            resultado[k++] = str2[j++];
        }
    }
    
    resultado[k] = '\0';
    printf("%s", resultado);
} 