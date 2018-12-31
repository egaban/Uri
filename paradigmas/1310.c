#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (a > b)? (a) : (b)
#define MAX_DIAS 50

int MaxLucro(int n, int lucro[MAX_DIAS]);

int main(void) {
    int n, custo, i;
    int lucro[MAX_DIAS];

    while (scanf("%d", &n) != EOF) {
        scanf("%d", &custo);

        for (i = 0; i < n; ++i) {
            scanf("%d", &lucro[i]);
            lucro[i] -= custo;
        }

        printf("%d\n", MaxLucro(n, lucro));
    }

    return 0;
}


int MaxLucro(int n, int lucro[MAX_DIAS]) {
    int *s = (int*) malloc(n * sizeof (int)); /* s[i] representa a maior subsequência que inclui lucro[i]. */
    int maior, i;

    s[0] = lucro[0];
    maior = s[0];

    for (i = 1; i < n; ++i) {
        s[i] = max(s[i-1] + lucro[i], lucro[i]);
        if (s[i] > maior)
            maior = s[i];
    }

    free(s);
    return (maior < 0)? 0 : maior;
}
