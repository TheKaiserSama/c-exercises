#include <stdio.h>

int main() {

    char car;
    printf("Introducir un caracter: ");
    car = getchar(); // Lee caracter y lo almacena en variable car
    printf("Carácter: %c, valor ASCII: %d\n", car, car);

    return 0;
}