#include <stdio.h>
#include <string.h>

#define MAX 20000

int main(void) {
    int m, n, i, r, aux;
    short bilhetes[MAX];

    while (1) {
        scanf("%d %d", &n, &m);
        if (!n && !m)
            break;

        memset(bilhetes, 0, n * sizeof (short));
        for (i = 0; i < m; ++i) {
            scanf("%d", &aux);
            bilhetes[aux-1]++;
        }
        
        r = 0;
        for (i = 0; i < n; ++i) {
            if (bilhetes[i] > 1)
                r++;
        }

        printf("%d\n", r);
    }

    return 0;
}