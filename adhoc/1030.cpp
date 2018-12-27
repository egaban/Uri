#include <iostream>
#include <cstring>

#define MAX_N 10000

int CalcularJosephus(int n, int k, int cache[MAX_N]);
int Josephus(int n, int k, int cache[MAX_N]);

int main(void) {
    int casos, k, n;
    int cache[MAX_N];

    std::cin >> casos;

    for (int i = 1; i <= casos; ++i) {
        std::cin >> n >> k;
        memset(cache, -1, sizeof(cache));
        std::cout << "Case " << i << ": " << Josephus(n, k, cache) << std::endl;
    }

    return 0;
}

int CalcularJosephus(int n, int k, int cache[MAX_N]) {
    if (n == 1)
        return 1;
    else
        return (k + Josephus(n-1, k, cache) - 1) % n + 1;
}

int Josephus(int n, int k, int cache[MAX_N]) {
    if (cache[n-1] == -1)
        cache[n-1] = CalcularJosephus(n, k, cache);
    return cache[n-1];
}
