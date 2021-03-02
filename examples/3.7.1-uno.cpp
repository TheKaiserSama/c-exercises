#include <stdio.h>

void funcion_1(void);
void funcion_2(void);

extern int var; // Declaracion de var que hace referencia a la variable var definida a continuación

int main() {
    
    var++;
    printf("%d\n", var); // Se escribe 6
    funcion_1();

    return 0;
}

int var = 5;

void funcion_1(void) {
    var++;
    printf("%d\n", var); // Se escribe 7
    funcion_2();
}