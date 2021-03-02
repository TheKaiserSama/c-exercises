#include <stdio.h>

int main() {
    printf("El tamaño de un char es: %d bytes\n", sizeof(char));
    printf("El tamaño de un short es: %d bytes\n", sizeof(short));
    printf("El tamaño de un int es: %d bytes\n", sizeof(int));
    printf("El tamaño de un long es: %d bytes\n", sizeof(long));
    // printf("El tamaño de un enum es: %d bytes\n", sizeof(enum));
    printf("El tamaño de un float es: %d bytes\n", sizeof(float));
    printf("El tamaño de un double es: %d bytes\n", sizeof(double));
    return 0;
}