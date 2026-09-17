#include <stdio.h>

int main() {
    float K, C;

    scanf("%f", &K);
    C = K - 273.15;

    printf("%.2f\n", C);

    return 0;
}