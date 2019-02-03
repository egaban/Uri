#include <stdio.h>
#include <string.h>

#define MIN_ALTURA 20
#define MAX_ALTURA 230

char primeiroValor = 1;

void imprimirAltura(int altura, int vezes);

int main(void) {
    int i, casos, pessoas, entrada;
    const int alturasPossiveis = MAX_ALTURA-MIN_ALTURA+1;
    int alturas[alturasPossiveis];

    scanf("%d", &casos);

    while (casos--) {
        memset(alturas, 0, sizeof (alturas));
        primeiroValor = 1;
        scanf("%d", &pessoas);

        while (pessoas--) {
            scanf("%d", &entrada);
            alturas[entrada-MIN_ALTURA]++;
        }

        for (i = 0; i < alturasPossiveis; ++i)
            imprimirAltura(i+MIN_ALTURA, alturas[i]);
        printf("\n");
    }

    return 0;
}

void imprimirAltura(int altura, int vezes) {
    int i = 0;

    if (primeiroValor) {
        if (vezes) {
            printf("%d", altura);
            primeiroValor = 0;
            i = 1;
        }
    }
    
    for (; i < vezes; ++i)
        printf(" %d", altura);
}