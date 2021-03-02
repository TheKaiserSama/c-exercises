#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double volumen = 0, radio = 0;
    system("clear");

    printf("Ingrese el radio de la esfera: ");
    scanf("%lf", &radio);

    volumen = ((double)4 / 3) * M_PI * pow(radio, 3);

    printf("\nEL volumen de la esfera de radio = %g , es %g\n", radio, volumen);

    return 0;
}