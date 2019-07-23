#include <iostream>

#define MOD 1000000007

int Compare(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main(void) {
	int n, k;
	long long soma;

	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	while (std::cin >> n >> k) {
		int v[n];
		memset(v, 0, sizeof(v));
		for (int i = 0; i < n; ++i)
			std::cin >> v[i];
		qsort(v, n, sizeof(int), Compare);
		soma = 0;
		for (int i = 0; i < k; ++i)
			soma += v[i];
		std::cout << soma % MOD << std::endl;
	}

	return 0;
}
