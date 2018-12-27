#include <iostream>

void PrintPosicao(int m, int n, int x, int y) {
	if (x == m || y == n)
		std::cout << "divisa\n";
	else {
		if (x > m && y > n)
			std::cout << "NE\n";
		else if (x > m && y < n)
			std::cout << "SE\n";
		else if (x < m && y > n)
			std::cout << "NO\n";
		else
			std::cout << "SO\n";
	}
}

int main(void) {
	int k, m, n, x, y;
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (1) {
		std::cin >> k;
		if (!k)
			break;
		std::cin >> m >> n;

		while (k--) {
			std::cin >> x >> y;
			PrintPosicao(m, n, x, y);
		}
	}

	return 0;
}
