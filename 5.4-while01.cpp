#include <stdio.h>

void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main() {
    char car = '\0';

    printf("Desea continuar s/n (si o no) ");
    car = getchar();
    while (car != 's' && car != 'n') {
        clean_stdin();
        printf("Desea continuar s/n (si o no) ");
        car = getchar();
    }
    return 0;
}