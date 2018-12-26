#include <bits/stdc++.h>

int main(void)
{
    int n;
    std::string texto;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n;
    std::cin.ignore();

    while (n--)
    {
        std::getline(std::cin, texto);
        std::reverse(texto.begin(), texto.end());
        for (size_t i = texto.length() / 2; i < texto.length(); ++i)
            std::cout << texto[i];
        for (size_t i = 0; i < texto.length() / 2; ++i)
            std::cout << texto[i];
        std::cout << "\n";
    }

    return 0;
}