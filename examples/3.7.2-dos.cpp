#include <stdio.h>

extern int var;

void funcion_2() {
    var++;
    printf("%d\n", var);
}