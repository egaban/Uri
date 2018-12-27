#include <iostream>

int main(void) {
	int v[3];
	int quantidade_0;

	while (std::cin >> v[0] >> v[1] >> v[2]) {
		quantidade_0 = 0;
		for (int i = 0; i < 3; ++i) {
			if (v[i] == 0)
				quantidade_0++;
		}
		if (quantidade_0 == 1 || quantidade_0 == 2) {
			if (v[0] != v[1] && v[0] != v[2])
				std::cout << "A\n";
			else if (v[1] != v[0] && v[1] != v[2])
				std::cout << "B\n";
			else
				std::cout << "C\n";
		} else
			std::cout << "*\n";
	}

	return 0;
}
