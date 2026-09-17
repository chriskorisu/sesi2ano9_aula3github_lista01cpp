#include <stdio.h>

int main() {
    int dias;
    float valor, liquido;

    scanf("%d", &dias);

    valor = dias * 30.00;
    liquido = valor * 0.92;

    printf("R$ %.2f\n", liquido);

    return 0;
}