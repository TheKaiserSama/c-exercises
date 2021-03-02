#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30, d = 51, suma = 0;
    float media = 0.0F;
    
    suma = a + b + c + d;
    media = (float)suma / 4;

    printf("Suma = %d\n", suma);
    printf("Media = %g\n", media);

    return 0;
}