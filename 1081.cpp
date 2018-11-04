#include <bits/stdc++.h>

#define MAX 20

void ReceberArestas(bool a[MAX][MAX], int e);
void DFS(bool a[MAX][MAX], bool v[MAX], int x, int n, int nivel);
void Indentar(int n);

int main(void) {
	int k;
	bool arestas[MAX][MAX];
	bool visitados[MAX];
	int v, e;

	std::cin >> k;

 	for (int i = 1; i <= k; ++i) {
		memset(arestas, 0, sizeof(arestas));
		memset(visitados, 0, sizeof(visitados));
		std::cin >> v >> e;
		ReceberArestas(arestas, e);
		std::cout << "Caso " << i << ":" << std::endl;
		for (int j = 0; j < v; ++j) {
			if (!visitados[j]) {
				DFS(arestas, visitados, j, v, 1);
			}
		}
		std::cout << std::endl;
	}

	return 0;
}

void ReceberArestas(bool a[MAX][MAX], int e) {
	int de, para;

	for (int i = 0; i < e; ++i) {
		std::cin >> de >> para;
		a[de][para] = true;
	}
 }

void DFS(bool a[MAX][MAX], bool v[MAX], int x, int n, int nivel) {
	v[x] = true;
	for (int i = 0; i < n; ++i) {
		if (a[x][i]) {
			if (nivel == 1 && x > 0)
				std::cout << std::endl;
			Indentar(nivel);
			std::cout << x << "-" << i;
			if (!v[i]) {
				std::cout << " pathR(G," << i << ")" << std::endl;
				v[i] = true;
				DFS(a, v, i, n, nivel+1);
			} else
				std::cout << std::endl;
		}
	}
}
void Indentar(int n) {
	for (int i = 0; i < n; ++i)
		std::cout << "  ";
}
