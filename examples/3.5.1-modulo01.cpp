#include <stdio.h>

int max(int, int);

int main() {
    int a = 0, b = 0, c = 0; /* Definición de variables */
    int mayor = 0;

    printf("Valores a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    mayor = max(a, b);
    mayor = max(mayor, c);
    printf("Mayor = %d\n", mayor);
    
    return 0;
}