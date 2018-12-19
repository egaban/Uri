#include <iostream>

char ProximaDirecao(char atual, char sentido) {
    switch (atual) {
        case 'N':
            return (sentido == 'D')? 'L' : 'O';
        case 'O':
            return (sentido == 'D')? 'N' : 'S';
        case 'L':
            return (sentido == 'D')? 'S' : 'N';
        case 'S':
            return (sentido == 'D')? 'O' : 'L';
    }
}

int main(void) {
    int n;
    char c;
    char direcao;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (1) {
        std::cin >> n;
        if (!n)
            break;
        direcao = 'N';
        while (n--) {
            std::cin >> c;
            direcao = ProximaDirecao(direcao, c);
        }
        std::cout << direcao << "\n";
    }

    return 0;
}