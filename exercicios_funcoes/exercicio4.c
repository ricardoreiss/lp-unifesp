#include <stdio.h>

int mdc_euclides(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    int resultado = mdc_euclides(num1, num2);
    printf("O MDC de %d e %d eh: %d\n", num1, num2, resultado);
} 