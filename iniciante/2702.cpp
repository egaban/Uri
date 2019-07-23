#include <iostream>

int main(void)
{
    int opcoes[2][3];
    int r;

    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            std::cin >> opcoes[i][j];

    r = 0;
    for (int i = 0; i < 3; ++i)
        if (opcoes[1][i] - opcoes[0][i] > 0)
            r += opcoes[1][i] - opcoes[0][i];

    std::cout << r << "\n";

    return 0;
}
