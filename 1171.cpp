#include <iostream>
#include <cstring>

int main(void) {
	int n, entrada;
	char v[2000];

	memset(v, 0, sizeof (v));
	std::cin >> n;
	while (n--) {
		std::cin >> entrada;
		v[entrada-1]++;
	}

	for (int i = 0; i < 2000; ++i)
		if (v[i])
			std::cout << i+1 << " aparece " << (int) v[i] << " vez(es)\n";

	return 0;
}
