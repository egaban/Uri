#include <stdio.h>

int main(void) {
    int n, i, entrada;
    int opinioes[2] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        scanf("%d", &entrada);
        opinioes[entrada]++;
    }

    if (opinioes[0] > n/2)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}