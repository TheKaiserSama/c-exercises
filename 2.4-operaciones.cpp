#include <stdio.h>

int main() {
    int a = 10, b = 3, c, d, e;
    float x, y;

    x = a / b; // x = 3
    printf("Dato x = %g\n", x);
    c = a < b && 25; // c = 0
    printf("Dato c = %d\n", c);
    d = a + b++; // d = 13, b = 4
    printf("Dato d = %d\n", d);
    e = ++a + b; // e = 15, a = 11
    printf("Dato e = %d\n", e);
    y = (float)a / b; // y = 2.75
    printf("Dato y = %g\n", y);

    return 0;
}