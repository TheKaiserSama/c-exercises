#include <stdio.h>
#include <math.h>

int main() {
    double x = 0, resultado = 0;

    printf("Valor de x = ");
    scanf("%lf", &x);

    resultado = 3 * pow(x, 5) - 5 * pow(x, 3) + 2 * x - 7;

    printf("\nPara x = %g, 3x^5 - 5x^3 + 2x - 7 = %g\n", x, resultado);
    return 0;
}