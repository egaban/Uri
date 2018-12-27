#include <iostream>

int main(void) {
	int n;
	int a, b;
	bool encaixa;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> a >> b;
		encaixa = true;

		while (b && encaixa) {
			if (a % 10 == b % 10) {
				a /= 10;
				b /= 10;
			} else
				encaixa = false;
		}

		if (encaixa)
			std::cout << "encaixa" << std::endl;
		else
			std::cout << "nao encaixa" << std::endl;
	}

	return 0;
}