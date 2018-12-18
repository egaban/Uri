#include <iostream>

#define r(x,y) 9*x*x + y*y 
#define b(x,y) 2*x*x + 25*y*y
#define c(x,y) -100*x + y*y*y
#define max(x,y) (x > y)? x : y

int main(void) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, x, y, maior;
	int beto, carlos, rafael;

	std::cin >> n;

	while (n--) {
		std::cin >> x >> y;
		beto = b(x,y);
		carlos = c(x,y);
		rafael = r(x,y);
		maior = max(beto, carlos);
		maior = max(maior, rafael);

		if (maior == beto)
			std::cout << "Beto";
		else if (maior == carlos)
			std::cout << "Carlos";
		else
			std::cout << "Rafael";

		std::cout << " ganhou\n";
	}

	return 0;
}
