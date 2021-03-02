#include <stdio.h>

int main() {
    char nombre[20];
    int anio_nacimiento, anio_actual;
    printf("Datos personales\n\n");
    printf("Nombre: ");
    scanf("%s", &nombre);
    printf("Año de nacimiento: ");
    scanf("%d", &anio_nacimiento);
    printf("Año actual: ");
    scanf("%d", &anio_actual);

    printf("\nHola %s, en el año %d cumpliras %d años\n", nombre, anio_actual, (anio_actual - anio_nacimiento));
    
    return 0;
}