#include <stdio.h>

int main() {
    int a, r;
    float b;
    char c;

    printf("Introducir un valor entero, un real y un char\n=>");
    r = scanf("%d %f %c", &a, &b, &c);
    printf("\nNúmero de datos leidos = %d\n", r);
    printf("Datos leídos %d %f %c\n", a, b, c);

    printf("\nValor hexadecimal: ");
    scanf("%i", &a);
    printf("Valor decimal: %i\n", a);

    return 0;
}