#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
    
    for(int i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    
    printf("%s", str);
} 