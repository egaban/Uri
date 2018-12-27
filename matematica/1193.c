#include <stdio.h>
#include <string.h>

#define MAX 32

int ConverterParaDecimal(char entrada[MAX+1], char b[4]);
void PrintBinario(int numero);
int ConverterChar(char c);

int main(void) {
    int n, numero;
    char entrada[MAX+1], base[4];

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        scanf("%s %s", entrada, base);
        numero = ConverterParaDecimal(entrada, base);

        printf("Case %d:\n", i);
        if (strcmp(base, "dec"))
            printf("%d dec\n", numero);
        if (strcmp(base, "hex"))
            printf("%x hex\n", numero);
        if (strcmp(base, "bin")) {
            PrintBinario(numero);
            printf(" bin\n");
        }
        printf("\n");
    }


    return 0;
}

void PrintBinario(int num) {
    if (num) {
        PrintBinario(num/2);
        printf("%d", num % 2);
    }
}

int ConverterParaDecimal(char entrada[MAX+1], char b[4]) {
    int n = 0;
    int base;

    switch(b[0]) {
        case 'b':
            base = 2;
            break;
        case 'h':
            base = 16;
            break;
        case 'd':
            base = 10;
            break;
    }

    for (int i = 0; entrada[i]; ++i)
        n = n * base + ConverterChar(entrada[i]);

    return n;
}

int ConverterChar(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'a' + 10;
}
