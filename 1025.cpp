#include <iostream>
#include <stdlib.h>

#define MAX 10000

void ReceberMarmores(int v[], int n);
void ReceberConsultas(int w[], int q);
void Consultar(int v[], int w[], int q, int n);
int Compare(const void *a, const void *b);
int MenorPosIgual(int v[], int x, int i);
int BuscaBinaria(int v[], int x, int n);

int main(void) {
    int v[MAX], w[MAX];
    int n, q;
    int k = 1;

    std::cin >> n >> q;
    while (n || q) {
        ReceberMarmores(v, n);
        ReceberConsultas(w, q);
        std::cout << "CASE# " << k++ << ":" << std::endl;
        Consultar(v, w, q, n);
        std::cin >> n >> q;
    }

    return 0;
}

void ReceberMarmores(int v[], int n) {
    for (int i = 0; i < n; ++i)
        std::cin >> v[i];
}

void ReceberConsultas(int w[], int q) {
    for (int i = 0; i < q; ++i)
        std::cin >> w[i];
}


void Consultar(int v[], int w[], int q, int n) {
    int pos;

    qsort(v, n, sizeof(int), Compare);
    for (int i = 0; i < q; ++i) {
        pos = BuscaBinaria(v, w[i], n);
        if (pos >= 0)
            std::cout << w[i] << " found at " << MenorPosIgual(v, w[i], pos) + 1 << std::endl;
        else
            std::cout << w[i] << " not found" << std::endl;
    }
}

int MenorPosIgual(int v[], int x, int i) {
    int j = i;

    while (j > 0 && v[j-1] == x)
        j--;

    return j;
}

int Compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int BuscaBinaria(int v[], int x, int n) {
    int esq = 0, dir = n-1;
    int meio;

    while (esq <= dir) {
        meio = (esq+dir)/2;
        if (v[meio] > x)
            dir = meio-1;
        else if (v[meio] < x)
            esq = meio+1;
        else
            return meio;
    }

    return -1;
}
