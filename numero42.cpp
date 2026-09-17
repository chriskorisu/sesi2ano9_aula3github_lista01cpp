#include <stdio.h>

int main() {
    float salario, gratificacao, bruto, imposto, liquido;

    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    bruto = salario + gratificacao;

    imposto = bruto * 0.07;
    liquido = bruto - imposto;

    printf("R$ %.2f\n", liquido);

    return 0;
}