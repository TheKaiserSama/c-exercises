#include <stdio.h>

int main() {
    int a = 0, b = 0, s = 0;

    printf("Valores de a  y b: ");
    scanf("%d %d", &a, &b);

    s = a + b;
    printf("La suma es %d\n", s);

    return 0;
}