#include <stdio.h>

enum colores {
    azul, amarillo, rojo, verde, blanco, negro
};

int main() {
    enum colores color;
    
    printf("Color: ");
    scanf("%d", &color);
    printf("%d\n", color);

    if (color == verde) printf("Esperanza\n");
    return 0;
}