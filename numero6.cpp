#include <stdio.h>

int main() {
    float C, F;

    scanf("%f", &C);
    F = C * 9.0 / 5.0 + 32.0;

    printf("%.2f\n", F);

    return 0;
}