#include <stdio.h>

int main() {
    int idade, anoAtual, nascimento;

    scanf("%d", &idade);

    anoAtual = 2026;
    nascimento = anoAtual - idade;

    printf("%d\n", nascimento);

    return 0;
}