#include <stdio.h>
#include <stdlib.h>

#define MAX_M 100

typedef struct celula {
    int chave;
    struct celula *prox;
} cel;

void CriarListas(cel *v[]);
void PushKey(cel *v, int k);
void ImprimirListas(cel *v[], int n);
void DeletarListas(cel *v[]);

int main(void) {
    int i, k, m, n, chave;
    char primeirocaso = 1;
    cel *v[MAX_M];

    CriarListas(v);
    scanf("%d", &k);

    while (k--) {
        if (primeirocaso)
            primeirocaso = 0;
        else
            printf("\n");

        scanf("%d %d", &m, &n);            
        for (i = 0; i < n; ++i) {
            scanf("%d", &chave);
            PushKey(v[chave % m], chave);
        }
        ImprimirListas(v, m);
    }

    DeletarListas(v);
    return 0;
}

void CriarListas(cel *v[]) {
    int i;
    cel *cabeca;

    for (i = 0; i < MAX_M; ++i) {
        cabeca = (cel*) malloc(sizeof (cel));
        cabeca->prox = NULL;
        v[i] = cabeca;
    }
}

void PushKey(cel *v, int k) {
    cel *p = v;
    cel *nova = (cel*) malloc(sizeof (cel));

    nova->chave = k;
    nova->prox = NULL;
    while (p->prox)
        p = p->prox;
    p->prox = nova;
}

void ImprimirListas(cel *v[], int n) {
    int i;
    cel *p, *lixo;

    for (i = 0; i < n; ++i) {
        printf("%d -> ", i);

        p = v[i]->prox;
        v[i]->prox = NULL;
        while (p) {
            printf("%d -> ", p->chave);
            lixo = p;
            p = p->prox;
            free(lixo);
        }

        printf("\\\n");
    }
}

void DeletarListas(cel *v[]) {
    int i;
    
    for (i = 0; i < MAX_M; ++i)
     free(v[i]);
}
