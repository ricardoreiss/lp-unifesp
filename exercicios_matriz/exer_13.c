#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    srand(time(NULL));
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(j > i) {
                matriz[i][j] = 0;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
} 