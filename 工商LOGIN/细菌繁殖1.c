#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int a, b, c, d, e,day;
		double sum=0;
		scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
		day = e - b;
		for (j = a; j <= d - 1; j++) {
			day += month[j];
		}
		sum = c * pow(2, day);
		printf("%d\n", (int)sum);
	}
	return 0;
}
