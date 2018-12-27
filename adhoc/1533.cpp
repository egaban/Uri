#include <iostream>

class Suspeito
{
public:
    int posicao;
    int classificacao;

    Suspeito()
    {
        posicao = -1;
        classificacao = -1;
    }
};

int main(void) {
    int n;
    Suspeito principal, segundo;
    int entrada;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (1)
    {
        std::cin >> n;
        if (!n)
            break;

        std::cin >> entrada;
        principal.classificacao = entrada;
        principal.posicao = 1;
        segundo.classificacao = -1;
        segundo.posicao = -1;

        for (int i = 2; i <= n; ++i)
        {
            std::cin >> entrada;
            if (entrada > principal.classificacao)
            {
                segundo = principal;
                principal.classificacao = entrada;
                principal.posicao = i;
            } else if (entrada > segundo.classificacao)
            {
                segundo.classificacao = entrada;
                segundo.posicao = i;
            }
        }

        std::cout << segundo.posicao << "\n";
    }

    return 0;
}