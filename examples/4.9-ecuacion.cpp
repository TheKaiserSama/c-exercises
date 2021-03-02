#include <stdio.h>    // Necesario para printf y scanf
#include <stdlib.h>   // Necesario para system
#include <math.h>     // Necesario para sqrt

int main() {
    double a, b, c, d, x1, x2;
    system("clear");

    printf("Introducir los coeficientes a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;
    if (d < 0) {
        printf("Las raíces son complejas\n");
        exit(0);
    } else {
        printf("Las raíces reales son:\n");
    }
    
    d = sqrt(d);
    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);

    printf("x1 = %g\nx2 = %g\n", x1, x2);
    
    return 0;
}