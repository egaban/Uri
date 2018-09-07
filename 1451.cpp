#include <iostream>
#include <list>
#include <string>

int main(void) {
	std::string entrada;

	while (std::cin >> entrada) {
		std::list<char> lista;
		std::list<char>::iterator it = lista.begin();

		for (unsigned i = 0; i < entrada.length(); ++i) {
			if (entrada[i] == '[')
				it = lista.begin();
			else if (entrada[i] == ']')
				it = lista.end();
			else
				lista.insert(it, entrada[i]);
		}

		std::list<char>::iterator final = lista.end();

		for (it = lista.begin(); it != final; ++it) {
			std::cout << *it;
		}

		std::cout << std::endl;
	}

	return 0;
}