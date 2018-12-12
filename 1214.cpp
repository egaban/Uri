#include <cstdio>
#include <vector>

int main(void) {
	int c, n;
	int acimadamedia;
	double media;
	std::vector<int> v;

	scanf("%d", &c);

	for (int i = 0; i < c; ++i) {
		acimadamedia = 0;
		media = 0;

		scanf("%d", &n);
		v.resize(n);

		for (int j = 0; j < n; ++j) {
			scanf("%d", &v[j]);
			media += v[j];
		}

		media /= n;
		for (int j = 0; j < n; ++j) {
			if (v[j] > media)
				acimadamedia++;
		}
		printf("%.3lf%%\n", 100*(double)acimadamedia/n);
	}



	return 0;
}
