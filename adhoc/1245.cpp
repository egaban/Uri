#include <bits/stdc++.h>

int main(void) {
    int botas[2][31];
    int n, m;
    int pares;
    char l;

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (std::cin >> n) {
        pares = 0;
        memset(botas, 0, sizeof(botas));
        while (n--) {
            std::cin >> m >> l;

            if (botas[l == 'E'][m-30]) {
                pares++;
                botas[l == 'E'][m-30]--;
            } else
                botas[l == 'D'][m-30]++;
        }
        std::cout << pares << "\n";
    }

    return 0;
}