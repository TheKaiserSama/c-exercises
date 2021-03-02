#include <stdio.h>

int main() {
    int a = 1, b = 5, c = 2;
    float result = 0;

    result = ((b*b) - 4*a*c) / (float)2*a;

    printf("Resultado = %g\n", result);
    return 0;
}