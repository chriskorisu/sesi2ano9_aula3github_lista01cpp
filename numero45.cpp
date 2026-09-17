#include <stdio.h>

int main() {
    char letra;

    scanf("%c", &letra);

    if (letra >= 'A' && letra <= 'Z')
        letra = letra + 32;

    printf("%c\n", letra);

    return 0;
}