#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, n = 0;
	scanf("%d%d", &a, &b);
	if (a > b)	printf("%d ", b);
	else printf("%d ", a);
	printf("%d\n", (int)(fabs(a - b) / 2));
}