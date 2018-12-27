#include <iostream>

int DiferencaHorarios(int h1, int m1, int h2, int m2) {
	int dif = m2 - m1;
	int aux;

	if (dif < 0) {
		dif += 60;
		h1++;
	}
	
	aux = h2 - h1;
	if (aux < 0)
		aux += 24;
	dif += 60 * aux;

	return dif;
}

int main(void) {
	int h1, h2, m1, m2;

	while (1) {
		std::cin >> h1 >> m1 >> h2 >> m2;
		if (!h1 && !h2 && !m1 && !m2)
			break;
		std::cout << DiferencaHorarios(h1, m1, h2, m2) << "\n";
	}


	return 0;
}
