#include <iostream>

#define MAX_PROJETEIS 50
#define max(a, b) (a > b)? a : b

typedef struct {
    int poder, peso;
} projetil;

int Knapsack(projetil v[], int n, int capacidade);

int main(void) {
    int k, n, capacidade, resistencia;
    projetil v[MAX_PROJETEIS];

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> k;
    while (k--) {
        std::cin >> n;

        for (int i = 0; i < n; ++i)
            std::cin >> v[i].poder >> v[i].peso;
        std::cin >> capacidade >> resistencia;

        if (Knapsack(v, n, capacidade) >= resistencia)
            std::cout << "Missao completada com sucesso\n";
        else
            std::cout << "Falha na missao\n";
    }

    return 0;
}

int Knapsack(projetil v[], int n, int capacidade) {
    int K[n+1][capacidade+1];

    for (int i = 0; i <= capacidade; ++i)
        K[0][i] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= capacidade; ++j) {
            if (v[i-1].peso > j)
                K[i][j] = K[i-1][j];
            else
                K[i][j] = max(K[i-1][j], v[i-1].poder + K[i-1][j-v[i-1].peso]);
        }
    }

    return K[n][capacidade];
}
