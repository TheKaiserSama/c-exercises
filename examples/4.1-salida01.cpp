#include <stdio.h>

int main() {
    int a = 12345;
    float b = 54.865F;

    printf("%d\n", a);
    printf("\n%10s\n%10s\n", "abc", "abcdef");
    printf("\n%-10s\n%-10s\n", "abc", "abcdef");
    printf("\n");
    printf("%.2f\n", b);

    return 0;
}