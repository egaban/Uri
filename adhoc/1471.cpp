#include <bits/stdc++.h>

#define MAX 10000

int main(void)
{
    int n, r, x;
    bool voltou[MAX];

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (std::cin >> n >> r)
    {
        memset(voltou, 0, n);
        
        for (int i = 0; i < r; ++i)
        {
            std::cin >> x;
            voltou[x-1] = true;
        }

        for (int i = 0; i < n; ++i)
            if (!voltou[i])
                std::cout << i+1 << " ";

        if (n == r)
            std::cout << "*";

        std::cout << "\n";
    }

    return 0;
}