#include <iostream>

void Verificar(std::string a, std::string b) {
	if (a.length() < b.length())
		std::cout << "nao encaixa\n";
	else {
		int i = a.length() - 1;
		int j = b.length() - 1;

		while (j >= 0 && a[i] == b[j]) {
			i--;
			j--;
		}

		if (j < 0)
			std::cout << "encaixa\n";
		else
			std::cout << "nao encaixa\n";
	}
}

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::string a, b;
	

	std::cin >> n;

	while (n--) {
		std::cin >> a >> b;
		Verificar(a, b);
	}


	return 0;
}
