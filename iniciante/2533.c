#include <stdio.h>

int main(void) {
    int m, n, c, ntotal, ctotal;

    while (scanf("%d", &m) != EOF) {
        ntotal = 0;
        ctotal = 0;
        while (m--) {
            scanf("%d %d", &n, &c);
            ntotal += n * c;
            ctotal += c;
        }

        printf("%.4f\n", (float)ntotal / (ctotal * 100));
    }

    return 0;
}
