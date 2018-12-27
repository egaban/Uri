#include <iostream>

#define MIN(a, b) (a < b)? a : b;

int Distancia(int a, int b);
int MinMoves(int x1, int y1, int x2, int y2);

int main(void) {
    int x1, x2, y1, y2;

    std::cin >> x1 >> y1 >> x2 >> y2;
    while (x1 && x2 && y1 && y2) {
        std::cout << MinMoves(x1, y1, x2, y2) << std::endl;
        std::cin >> x1 >> y1 >> x2 >> y2;
    }

    return 0;
}

int MinMoves(int x1, int y1, int x2, int y2) {
    /* Se já está na posição correta, não é necessário nenhum movimento. */
    if (x1 == x2 && y1 == y2)
        return 0;
    else {
        /* Se a distância entre os x's e y's é igual, pode ser feito um único
         * movimento na diagonal. */
        if (Distancia(x1, x2) == Distancia(y1, y2))
            return 1;
        else {
            if (x1 == x2)
                y1 = y2; //Move na vertical
            else
                x1 = x2; //Move na horizontal
            return 1 + MinMoves(x1, y1, x2, y2);
        }

    }
}

int Distancia(int a, int b) {
    return ((a-b)>0)? a-b : b-a;
}
