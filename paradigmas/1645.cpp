#include <iostream>

void ReceberSequencia(int v[], int n);
long long CalcularSubsequencias(int v[], int n, int k);

int main(void) {
	int v[100];
	int n, k;

	std::cin >> n >> k;

	while (n && k) {
		ReceberSequencia(v, n);
		std::cout << CalcularSubsequencias(v, n, k) << std::endl;
		std::cin >> n >> k;
	}
	
	return 0;
}

void ReceberSequencia(int v[], int n) {
	for (int i = 0; i < n; ++i)
		std::cin >> v[i];
}

long long CalcularSubsequencias(int v[], int n, int k) {
	long long dp[k][n]; //v[i][j] armazena a quantidade de sequências de i elementos e j colunas
	long long soma = 0;
	memset(dp, 0, sizeof(dp));

	// Sequências de tamanho 1 são crescentes
	for (int i = 0; i < n; ++i)
		dp[0][i] = 1;

	for (int linha = 1; linha < k; ++linha) {
		for (int coluna = linha; coluna < n; ++coluna) {
			for (int i = linha - 1; i < coluna; ++i) {
				if (v[coluna] > v[i])
					dp[linha][coluna] += dp[linha-1][i];
			}
		}
	}

	for (int i = k - 1; i < n; ++i)
		soma += dp[k-1][i];	

	return soma;
}

