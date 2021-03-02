#include <stdio.h>

int main() {
    float precio = 0;
    char car = 0;

    printf("Precio: ");
    scanf("%g", &precio);
    // fflush(stdin); No funciona en Linux

    printf("Pulse <Entrar> para continuar ");
    scanf("%*c%c", &car);

    printf("Precio = %g\n", precio);

    return 0;
}