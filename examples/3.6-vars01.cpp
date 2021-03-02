#include <stdio.h>

int var1 = 50;

int main() {
    printf("%d\n", var1); // 50

    {
        int var1 = 100, var2 = 200;
        printf("%d %d\n", var1, var2); // 100 200
        {
            int var1 = 0;
            printf("%d %d\n", var1, var2); // 0 200
        }
        printf("%d\n", var1); // 100
    }

    printf("%d\n", var1); // 50
    return 0;
}