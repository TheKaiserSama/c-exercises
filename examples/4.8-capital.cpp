#include <stdio.h>
#include <stdlib.h>

int main() {
    double c, intereses, capital;
    float r;
    int t;

    system("clear");
    printf("Capital invertido ");
    scanf("%lf", &c);
    printf("\nA un %% anual del ");
    scanf("%f", &r);
    printf("\nDurante cuántos días ");
    scanf("%d", &t);
    printf("\n\n");

    intereses = c * r * t / (360L * 100);
    capital = c + intereses;

    printf("Intereses producidos...%10.0f\n", intereses);
    printf("Capital acumulado......%10.0f\n", capital);

    return 0;
}