#include "stdio.h"

double sumar(double, double);
double restar(double, double);

int main() {
    double op1 = 225, op2 = 100, resultado = 0;

    resultado = sumar(op1, op2);
    printf("Suma = %g\n", resultado);
    resultado = restar(op1, op2);
    printf("Resta = %g\n", resultado);

    return 0;
}

double sumar(double x, double y) {
    double z;
    z = x + y;
    return z;
}

double restar(double x, double y) {
    double z;
    z = x - y;
    return z;
}