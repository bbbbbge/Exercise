#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	int month[12] = {0,31,29,31,30,31,30,31,31,30,31,30,31 };

	scanf("%d", &n);
	for (i = 1; i <= 12; i++) {
		int a, b, c, d, e, day;
		double sum = 0;
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		day = e - b;
		for (j = a; j <= d - 1; j++) {
			day += month[j];
		}
		sum = c * pow(2, day);
		printf("%lf\n", sum);
	}
	return 0;
}