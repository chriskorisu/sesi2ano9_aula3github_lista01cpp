#include <stdio.h>

int main() {
    float H, M;

    scanf("%f", &H);
    M = H * 10000;

    printf("%.2f\n", M);

    return 0;
}