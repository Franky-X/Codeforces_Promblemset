#include<stdio.h>
int main()
{
	int n,m;
	double p = 0, s = 0;
	scanf("%d", &n), m = n;
	while (n--)
	{
		scanf("%lf", &p);
		s += p;
	}
	printf("%.8lf", s / (double)m );
}