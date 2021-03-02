#include <stdio.h>

void funcion_1(void);

int main() {
    extern int var1; // Declaración de var1 que se supone esta definida en otro sitio
    static int var2; // Accesible solo dentro de main. Su valor inicial es 0
    register int var3 = 0; // var3 se corresponde con un resgistro si es posible
    int var4 = 0; // var4 se declara auto por defecto

    var1 += 2;
    printf("%d %d %d %d\n", var1, var2, var3, var4); // 7 0 0 0
    funcion_1();

    return 0;
}

int var1 = 5;

void funcion_1(void) {
    int var1 = 15; //Se define la variable local var1
    static int var2 = 5; // Accesible solo en este bloque

    var2 += 5;
    printf("%d %d\n", var1, var2); // 10 15
}