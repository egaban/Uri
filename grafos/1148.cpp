#include <iostream>

#define MAX_V 500

void CalcularDist(short g[MAX_V][MAX_V], short a, short b, int n);

int main(void) {
    int n, e, k;
    short x, y, h;
    short g[MAX_V][MAX_V];

    while (1) {
        std::cin >> n >> e;
        if (!n && !e)
            break;
        memset(g, -1, sizeof(g));                

       
        for (int i = 0; i < e; ++i) {
            std::cin >> x >> y >> h;
            if (g[y-1][x-1] != -1) {
                g[x-1][y-1] = 0;
                g[y-1][x-1] = 0;
            } else
                g[x-1][y-1] = h;
        }

        std::cin >> k;
        while (k--) {
            std::cin >> x >> y;
            CalcularDist(g, x-1, y-1, n);
        }
        std::cout << "\n";
    }

    return 0;
}

void CalcularDist(short g[MAX_V][MAX_V], short a, short b, int n) {
    bool visitado[n];
    short distancia[n];
    short atual = a;

    memset(visitado, 0, n);
    for (int i = 0; i < n; ++i) 
        distancia[i] = SHRT_MAX;
    distancia[a] = 0;

    while (!visitado[atual]) {
        visitado[atual] = true;

        for (int i = 0; i < n; ++i) {
            if (g[atual][i] != -1 && !visitado[i]) {
                if (distancia[i] > distancia[atual] + g[atual][i])
                    distancia[i] = distancia[atual] + g[atual][i];
            }
        }

        short menor = SHRT_MAX;
        for (int i = 0; i < n; ++i) {
            if (!visitado[i] && distancia[i] < menor) {
                atual = i;
                menor = distancia[i];
            }
        }
    }

    if (distancia[b] != SHRT_MAX)
        std::cout << distancia[b] << "\n";
    else
        std::cout << "Nao e possivel entregar a carta\n";
}
