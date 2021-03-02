#include <stdio.h>

void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main() {
    int car = 0;

    car = getchar();
    putchar(car);
    clean_stdin();

    car = getchar();
    putchar(car);

    return 0;
}