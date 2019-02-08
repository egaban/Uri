#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING 15

const unsigned dif_hex = 'A' - 10;

void ConverterParaHexa(char numero[]) {
    int i;
    unsigned n = 0;

    for (i = 0; numero[i]; ++i)
        n = 10*n + numero[i]-'0';
    printf("0x%X\n", n);
}

void ConverterParaDecimal(char numero[]) {
    int i;
    unsigned n = 0;

    for (i = 2; numero[i]; ++i) {
        n *= 16;
        if (numero[i] > '9') {
            /* O URI vai usar casos de teste com letras maiúsculas e minúsculas -.- */
            numero[i] = (char) toupper(numero[i]); 
            n += numero[i] - dif_hex;
        }
        else
            n += numero[i] - '0';
    }

    printf("%u\n", n);
}

int main(void) {
    char numero[MAX_STRING+1];

    while (1) {
        scanf("%s", numero);

        if (numero[0] == '-')
            return 0;

        if (numero[1] == 'x')
            ConverterParaDecimal(numero);
        else
            ConverterParaHexa(numero);
    }

    return 0;
}