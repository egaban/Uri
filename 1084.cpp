#include <iostream>

void MelhorNumero(char c[], int d, int n);

int main(void) {
	int n, d;

	std::cin >> n >> d;

	while (n || d) {
		char entrada[n+1];
		std::cin >> entrada;
		MelhorNumero(entrada, d, n);
		std::cin >> n >> d;
	}

	return 0;
}

void MelhorNumero(char c[], int d, int n) {
	char saida[n+1];
	int topo = 0;
	int i;

	saida[0] = c[0];

	for (i = 1; i < n; ++i) {
		while (topo >= 0 && c[i] > saida[topo] && d) {
			topo--;
			d--;
		}
		saida[++topo] = c[i];
	}

	while (i < n)
		saida[++topo] = c[i];

	while (d) {
		--d;
		--topo;
	}

	saida[++topo] = 0;
	std::cout << saida << std::endl;
}
