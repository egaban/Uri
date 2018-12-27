#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_STRING 100

int main(void) {
	int d;
	char n[MAX_STRING+1];
	bool zeroaesquerda;
	size_t i;

	while (1) {
		scanf("%d %s", &d, n);
		if (d == 0 && !strcmp("0", n))
			break;
		d += '0';
		zeroaesquerda = true;

		for (i = 0; n[i]; ++i) {
			if (n[i] != d) {
				if (n[i] == '0') {
					if (!zeroaesquerda)
						printf("0");
				} else {
					printf("%c", n[i]);
					zeroaesquerda = false;
				}
			}
		}
		if (zeroaesquerda)
			printf("0");
		printf("\n");
	}	

	return 0;
}
