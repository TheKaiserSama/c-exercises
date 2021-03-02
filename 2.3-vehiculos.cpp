#include <stdio.h>

int main() {
    enum vehiculo {
        placa,
        n_puertas,
        color,
        marca = 10,
    } v1;

    enum vehiculo v2;
    v2 = marca;
    // v2 = (enum vehiculo)3;

    printf("Valor v2 = %d", v2);
    return 0;
}