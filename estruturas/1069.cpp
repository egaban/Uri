#include <iostream>
#include <string>
#include <stack>

int Diamantes(std::string entrada);

int main(void) {
    std::string entrada;
    int k;

    std::cin >> k;

    while (k--) {
        std::cin >> entrada;
        std::cout << Diamantes(entrada) << std::endl;
    }

    return 0;
}

int Diamantes(std::string entrada) {
    int quantidade = 0;
    std::stack<char> pilha;

    for (int i = 0; i < entrada.length(); ++i) {
        if (entrada[i] == '<')
            pilha.push('<');
        else if (entrada[i] == '>') {
            if (!pilha.empty()) {
                pilha.pop();
                quantidade++;
            }
        }
    }

    return quantidade;

}
