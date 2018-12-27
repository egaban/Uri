#include <cstdio>
#include <cmath>

typedef struct {
    int moradores;
    int consumototal; //Consumo total do imovel
    int consumo; //Consumo por pessoa
} imovel;

void ReceberImoveis(imovel v[], int n, double &c);
void Resposta(imovel v[], int n, double c, int &k);
void Merge(imovel v[], int p, int q, int r);
void MergeSort(imovel v[], int p, int r);

int main(void) {
	int n, k = 1;
	double consumomedio;

	scanf("%d", &n);

	while (n) {
	    imovel v[n];
	    ReceberImoveis(v, n, consumomedio);
		MergeSort(v, 0, n);
		Resposta(v, n, consumomedio, k);
		scanf("%d", &n);
	}

	return 0;
}
/* Recebe a quantidade de moradores e o consumo total de n imóveis e calcula o
 * consumo por pessoa de cada imóvel. */
void ReceberImoveis(imovel v[], int n, double &c) {
    int xtotal = 0, ytotal = 0;    
    int x, y;
    
    for (int i = 0; i < n; ++i) {
		scanf("%d %d", &x, &y);
		v[i].moradores = x;
		v[i].consumototal = y;
		v[i].consumo = y / x;
		xtotal += x;
		ytotal += y;
    }

    c = floor(100 * (double)ytotal / xtotal) / 100;
}

void Merge(imovel v[], int p, int q, int r) {
	int i = p, j = q, k = 0;
	imovel w[r-p+1];

	while (i < q and j < r) {
		if (v[i].consumo < v[j].consumo)
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
}

void MergeSort(imovel v[], int p, int r) {
	if (p < r - 1) {
		int q = (p + r) / 2;
		MergeSort(v, p, q);
		MergeSort(v, q, r);
		Merge(v, p, q, r);
	}
}

void Resposta(imovel v[], int n, double c, int &k) {
	int i, j = -1, aux = -1;
	imovel w[n];	

	for (i = 0; i < n; ++i) {
		if (v[i].consumo != aux) {
			aux = v[i].consumo;
			w[++j].moradores = v[i].moradores;
			w[j].consumo = aux;
		} else
			w[j].moradores += v[i].moradores;
	}
	
	if (k > 1)
		printf("\n");
	printf("Cidade# %d:\n", k++);

	for (i = 0; i <= j; ++i) {
		printf("%d-%d", w[i].moradores, w[i].consumo);
		if (i < j)
			printf(" ");
	}

	printf("\nConsumo medio: %.2lf m3.\n", c);
}
