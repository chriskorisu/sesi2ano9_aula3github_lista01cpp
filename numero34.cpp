#include <stdio.h>

int main() {
    float raio, area;
    float pi = 3.141592;

    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("%.2f\n", area);

    return 0;
}