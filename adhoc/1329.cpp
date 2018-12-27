#include <iostream>

int main(void) {
	int n;
	int aux, m, j;

	while (1) {
		std::cin >> n;
		if (!n)
			break;

		m = j = 0;
		for (int i = 0; i < n; ++i) {
			std::cin >> aux;
			if (!aux)
				m++;	
			else
				j++;
		}
		std::cout << "Mary won " << m << " times and John won " << j << " times\n";
	}

	return 0;
}
