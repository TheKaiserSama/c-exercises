#include <stdio.h>

int main() {
    int dato1, dato2, resultado;
    dato1 = 20;
    dato2 = 10;

    resultado = dato1 + dato2;
    printf("%d + %d = %d\n", dato1, dato2, resultado);

    resultado = dato1 - dato2;
    printf("%d - %d = %d\n", dato1, dato2, resultado);

    resultado = dato1 * dato2;
    printf("%d * %d = %d\n", dato1, dato2, resultado);

    resultado = dato1 / dato2;
    printf("%d / %d = %d\n", dato1, dato2, resultado);
    
    return 0;
}