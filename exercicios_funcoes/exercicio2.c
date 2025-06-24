#include <stdio.h>

int tipo_triangulo(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0;
    }
    
    if (a == b && b == c) {
        return 1;
    }
    
    if (a == b || a == c || b == c) {
        return 2;
    }
    
    return 3;
}

int main() {
    int a, b, c;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int resultado = tipo_triangulo(a, b, c);
    
    switch (resultado) {
        case 0:
            printf("Os valores nao formam um triangulo.\n");
            break;
        case 1:
            printf("Triangulo equilatero.\n");
            break;
        case 2:
            printf("Triangulo isosceles.\n");
            break;
        case 3:
            printf("Triangulo escaleno.\n");
            break;
    }
} 