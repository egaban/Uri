#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void Merge(short v[], int p, int q, int r);
void MergeSort(short v[], int p, int r);

int main(void) {
    int k, n, i;
    int posicoes_mantidas;
    short notas[2][MAX]; /* A segunda linha da matriz mantém a fila original. */

    scanf("%d", &k);
    while (k--) {
        scanf("%d", &n);

        for (i = 0; i < n; ++i) {
            scanf("%hd", &notas[0][i]);
            notas[1][i] = notas[0][i];
        }
        MergeSort(notas[0], 0, n);

        posicoes_mantidas = 0;
        for (i = 0; i < n; ++i)
            if (notas[0][i] == notas[1][i])
                posicoes_mantidas++;

        printf("%d\n", posicoes_mantidas);        
    }

    return 0;
}

void Merge(short v[], int p, int q, int r) {
    int i = p, j = q, k = 0;
    int *w = (int*) malloc(sizeof (int) * (r-p+1));

    while (i < q && j < r) {
        if (v[i] > v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
    }
    while (i < q)
        w[k++] = v[i++];
    while (j < r)
        w[k++] = v[j++];

    for (i = p; i < r; ++i)
        v[i] = w[i-p];
    free(w);
}

void MergeSort(short v[], int p, int r) {
    int q;
    
    if (p < r - 1) {
        q = (p + r) / 2;
        MergeSort(v, p, q);
        MergeSort(v, q, r);
        Merge(v, p, q, r);
    }
}