#include <stdio.h>

int main() {
    float a, b, c, premio, total;
    float premioA, premioB, premioC;

    scanf("%f %f %f", &a, &b, &c);
    scanf("%f", &premio);

    total = a + b + c;

    premioA = premio * a / total;
    premioB = premio * b / total;
    premioC = premio * c / total;

    printf("Amigo 1: R$ %.2f\n", premioA);
    printf("Amigo 2: R$ %.2f\n", premioB);
    printf("Amigo 3: R$ %.2f\n", premioC);

    return 0;
}