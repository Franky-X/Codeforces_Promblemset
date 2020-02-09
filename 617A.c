#include<stdio.h>
int main()
{
	long long int x, n = 0, m = 5;
	scanf("%lld", &x);
	while (m)
	{
		if (x / m)	n += x / m, x %= m;
		m--;
	}
	printf("%lld", n);
}