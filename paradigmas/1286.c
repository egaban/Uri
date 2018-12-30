#include <stdio.h>

#define MAX_PEDIDOS 20
#define max(a, b) (a > b)? (a) : (b);

typedef struct {
    int quantidade;
    int tempo;
} pedido;

int Knapsack(pedido p[], int capacidade, int n);

int main(void) {
    int n, i;
    int capacidade;
    pedido p[MAX_PEDIDOS];

    while (1) {
        scanf("%d", &n);
        if (!n)
            break;
        scanf("%d", &capacidade);

        for (i = 0; i < n; ++i)
            scanf("%d %d", &p[i].tempo, &p[i].quantidade);
        printf("%d min.\n", Knapsack(p, capacidade, n));        
    }
    
    return 0;
}

int Knapsack(pedido p[], int capacidade, int n) {
    int i, j;
    int K[n+1][capacidade+1];

    for (i = 0; i <= capacidade; ++i)
        K[0][i] = 0;
    
    for (i = 1; i <= n; ++i) {
        for (j = 0; j <= capacidade; ++j) {
            if (p[i-1].quantidade > j)
                K[i][j] = K[i-1][j];
            else
                K[i][j] = max(K[i-1][j], p[i-1].tempo + K[i-1][j-p[i-1].quantidade]);
        }
    }
    
    return K[n][capacidade];
}
