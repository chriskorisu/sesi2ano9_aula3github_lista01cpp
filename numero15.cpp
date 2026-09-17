#include <stdio.h>

int main() {
    float R, G;

    scanf("%f", &R);
    G = R * 180.0 / 3.14;

    printf("%.2f\n", G);

    return 0;
}