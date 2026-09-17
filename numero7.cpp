#include <stdio.h>

int main() {
    float F, C;

    scanf("%f", &F);
    C = 5.0 * (F - 32.0) / 9.0;

    printf("%.2f\n", C);

    return 0;
}