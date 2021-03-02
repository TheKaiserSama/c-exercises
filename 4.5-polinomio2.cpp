#include <stdio.h>
#include <math.h>

int main() {
    double x = 0, resultado = 0, a = 0, b = 0, c = 0;

    printf("Ingrese los coeficientes a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Valor de x = ");
    scanf("%lf", &x);

    resultado = a * pow(x, 5) + b * pow(x, 3) + c * x - 7;

    printf("\nPara x = %g, %gx^5 %gx^3 %gx - 7 = %g\n", x, a, b, c, resultado);
    return 0;
}