#include<stdio.h>
#include<math.h>
int main()
{
	int r = 0, c = 0, x = 0, n = 0;
	while (!x)
	{
		scanf("%d", &x);
		n++;
	}
	r = (n-1) / 5 + 1;
	c = (n-1) % 5+1;
	n = 25 - n;
	while (n--)
		scanf("%d", &x);
	printf("%d\n",(int) (fabs(r - 3) + fabs(c - 3)));
}