#include <iostream>

void ConverterString(std::string a, std::string b) {
    size_t i = 0, j = 0;

    while (i < a.length() && j < b.length())
        std::cout << a[i++] << b[j++];
    while (i < a.length())
        std::cout << a[i++];
    while (j < b.length())
        std::cout << b[j++];
    std::cout << "\n";
}

int main(void) {
    int n;
    std::string a, b;

    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        ConverterString(a, b);
    }

    return 0;
}