#include <stdio.h>

int main(void) {
	double p, q, dif, dias;
	int paginas;

	while (1) {
		scanf("%lf", &p);
		if (p == 0)
			break;
		scanf("%lf %lf", &dif, &q);
		dias = (q*dif)/(q-p);
		paginas = dias * p;
		printf("%d pagina", paginas);
		if (paginas != 1)
			printf("s");
		printf("\n");
	}

	return 0;
}


