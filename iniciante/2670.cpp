#include <iostream>

/* Testa por forca bruta. */
int main(void) {
	int a, b, c;
	int tempo[3];
	int menor;

	std::cin >> a >> b >> c;

	tempo[0] = 2 * b + 4 * c;
	tempo[1] = 2 * a + 2 * c;
	tempo[2] = 4 * a + 2 * b;

	menor = tempo[0];
	if (tempo[1] < menor)
		menor = tempo[1];
	if (tempo[2] < menor)
		menor = tempo[2];

	std::cout << menor << std::endl;

	return 0;
}
