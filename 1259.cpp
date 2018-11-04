#include <iostream>

void Merge(int v[], int p, int q, int r, int(*f)(int a, int b));
void MergeSort(int v[], int p, int r, int(*f)(int a, int b));
int ComparePar(int a, int b);
int CompareImpar(int a, int b);

int main(void) {
	int n, j = 0, k = 0, temp;
	int *pares, *impares;

	std::cin >> n;
	pares = (int*)malloc(sizeof(int)*n);
	impares = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; ++i) {
		std::cin >> temp;
		if (temp % 2)
			impares[j++] = temp;
		else
			pares[k++] = temp;
	}

	MergeSort(pares, 0, k, ComparePar);
	MergeSort(impares, 0, j, CompareImpar);

	for (int i = 0; i < k; ++i)
		std::cout << pares[i] << std::endl;
	for (int i = 0; i < j; ++i)
		std::cout << impares[i] << std::endl;

	return 0;
}

void Merge(int v[], int p, int q, int r, int(*f)(int a, int b)) {
	int i = p, j = q, k = 0;
	int *w = (int*)malloc(sizeof(int)*(r-p+1));

	while (i < q && j < r) {
		if (f(v[i], v[j]) < 0)
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

void MergeSort(int v[], int p, int r, int(*f)(int a, int b)) {
	if (p < r - 1) {
		int q = (p+r)/2;
		MergeSort(v, p, q, f);
		MergeSort(v, q, r, f);
		Merge(v, p, q, r, f);
	}
}

int ComparePar(int a, int b) {
	return a - b;
}

int CompareImpar(int a, int b) {
	return b - a;
}

