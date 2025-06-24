#include <stdio.h>
#include <ctype.h>

int eh_letra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int eh_vogal(char c) {
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; vogais[i] != '\0'; i++) {
        if (c == vogais[i]) {
            return 1;
        }
    }
    return 0;
}

int eh_consoante(char c) {
    return eh_letra(c) && !eh_vogal(c);
}

int main() {
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    if (eh_letra(caractere)) {
        printf("O caractere '%c' eh uma letra.\n", caractere);
        
        if (eh_vogal(caractere)) {
            printf("O caractere '%c' eh uma vogal.\n", caractere);
        } else {
            printf("O caractere '%c' eh uma consoante.\n", caractere);
        }
    } else {
        printf("O caractere '%c' nao eh uma letra.\n", caractere);
    }
} 