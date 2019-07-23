#include <iostream>

int Diferencas(std::string a, std::string b);
inline size_t abs(size_t a);

int main(void) {
    int n;
    std::string entrada;

    std::cin >> n;

    while (n--) {
        std::cin >> entrada;

        if (entrada == "one" || Diferencas(entrada, "one") == 1)
            std::cout << 1;
        else if (entrada == "two" || Diferencas(entrada, "two") == 1)
            std::cout << 2;
        else
            std::cout << 3;
        std::cout << "\n";
    }

    return 0;
}

inline size_t abs(size_t a)
{
    return (a > 0)? a : -a;
}

int Diferencas(std::string a, std::string b) {
    int d = 0;

    for (size_t i = 0; i < a.length() && i < b.length(); ++i) {
        if (a[i] != b[i])
            d++;
    }

    d += abs(a.length() - b.length());

    return d;
}
