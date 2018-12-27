#include <iostream>

int main(void) {
	int n, m, l, a;
	int cm, cl;

	while (std::cin >> n) {
		std::cin >> m >> l;
		int M[m][n], L[l][n];

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j)
				std::cin >> M[i][j];
		}
		for (int i = 0; i < l; ++i) {
			for (int j = 0; j < n; ++j)
				std::cin >> L[i][j];
		}

		std::cin >> cm >> cl;
		std::cin >> a;


		if (M[cm-1][a-1] > L[cl-1][a-1])
			std::cout << "Marcos";
		else if (M[cm-1][a-1] < L[cl-1][a-1])
			std::cout << "Leonardo";
		else
			std::cout << "Empate";
		std::cout << std::endl;
	}

	return 0;
}