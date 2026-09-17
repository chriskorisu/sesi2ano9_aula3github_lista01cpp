#include <stdio.h>

int main() {
    float raio, altura, volume;
    float pi = 3.141592;

    scanf("%f %f", &raio, &altura);

    volume = pi * raio * raio * altura;

    printf("%.2f\n", volume);

    return 0;
}