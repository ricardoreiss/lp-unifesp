#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10], cont1 = 0, cont2 = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) {
            v2[cont2] = v[i];
            cont2++;
        } else {
            v1[cont1] = v[i];
            cont1++;
        }
    }
    
    for(int i = 0; i < cont1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");
    
    for(int i = 0; i < cont2; i++) {
        printf("%d ", v2[i]);
    }
} 