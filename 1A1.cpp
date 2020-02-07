#include<stdio.h>
int main()
{
	long long int n, m, a, c, r;
	scanf_s("%lld%lld%lld", &n, &m, &a);
	r = n / a + (n % a > 0);
	c = m / a + (m % a > 0);
	printf("%lld\n", c * r);
}