#include <stdio.h>

void intercambio(int *, int *);

int main() {
    int a = 20, b = 30;
    
    intercambio(&a, &b);
    printf("a vale %d y b vale %d\n", a, b);

    return 0;
}

void intercambio(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}