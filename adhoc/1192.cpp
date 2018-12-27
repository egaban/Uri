#include <cstdio>

#define quadrado(i) (i)*(i)

int main(void) {
	char s[4];
	int n;
	int r;

	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);

		s[0] -= '0';
		s[2] -= '0';
		if (s[0] == s[2])
			r = quadrado(s[0]);
		else {
			if (s[1] > 'Z')
				r = s[0] + s[2];
			else
				r = s[2] - s[0];
		}

		printf("%d\n", r);
	}

	return 0;
}
