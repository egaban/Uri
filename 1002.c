#include <stdio.h>

#define PI 3.14159

int main(void){
	double r, area;

	scanf("%lf", &r);
	area = PI * r * r;

	printf("A=%.4f\n", area);

	return 0;
}