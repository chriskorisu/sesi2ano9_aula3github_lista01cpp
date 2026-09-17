#include <stdio.h>

int main() {
    float total, desconto, valorDesconto;
    float parcela, comissaoVista, comissaoParcelada;

    scanf("%f", &total);

    valorDesconto = total * 0.10;
    desconto = total - valorDesconto;

    parcela = desconto / 3;

    comissaoVista = desconto * 0.05;
    comissaoParcelada = total * 0.05;

    printf("Total com desconto: R$ %.2f\n", desconto);
    printf("Cada parcela: R$ %.2f\n", parcela);
    printf("Comissao a vista: R$ %.2f\n", comissaoVista);
    printf("Comissao parcelada: R$ %.2f\n", comissaoParcelada);

    return 0;
}