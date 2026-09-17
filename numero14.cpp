#include <stdio.h>

int main() {
    float G, R;

    scanf("%f", &G);
    R = G * 3.14 / 180.0;

    printf("%.2f\n", R);

    return 0;
}