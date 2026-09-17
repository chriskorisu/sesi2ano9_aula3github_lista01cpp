#include <stdio.h>

int main() {
    float alturaDegrau, alturaObjetivo;
    int degraus;

    scanf("%f %f", &alturaDegrau, &alturaObjetivo);

    degraus = alturaObjetivo / alturaDegrau;

    if (alturaObjetivo > degraus * alturaDegrau)
        degraus++;

    printf("%d\n", degraus);

    return 0;
}