#include <bits/stdc++.h>

void GerarPotencias2(int v[]);
int PosicaoSegura(int n, int p[]);

int main(void) {
	int x, y;
	int p[30];
	int num, pot;

	GerarPotencias2(p);

	scanf("%1d%1de%d", &x, &y, &pot);
	num = (x * 10 + y) * pow(10, pot);

	while (num != 0) {
		printf("%d\n", PosicaoSegura(num, p));

		scanf("%1d%1de%d", &x, &y, &pot);
		num = (x * 10 + y) * pow(10, pot);
	}

	return 0;
}

int PosicaoSegura(int n, int p[]) {
	int i = 29;

	while (p[i] > n)
		i--;

	return 2 * (n - p[i]) + 1;
}

void GerarPotencias2(int v[]) {
	for (int i = 0; i < 30; ++i)
		v[i] = pow(2, i);
}
