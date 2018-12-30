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
    if (!n || !capacidade)
        return 0;
    else if (p[n-1].quantidade > capacidade)
        return Knapsack(p, capacidade, n-1);
    else {
        int a = p[n-1].tempo + Knapsack(p, capacidade - p[n-1].quantidade, n-1);
        int b = Knapsack(p, capacidade, n-1);

        return max(a, b);
    }
}
