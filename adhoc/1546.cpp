#include <iostream>

int main(void) {
    int n, k;
    int i;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n;
    while (n--) {
        std::cin >> k;
        while (k--) {
            std::cin >> i;
            if (i == 1)
                std::cout << "Rolien\n";
            else if (i == 2)
                std::cout << "Naej\n";
            else if (i == 3)
                std::cout << "Elehcim\n";
            else
                std::cout << "Odranoel\n";
        }
    }

    return 0;
}