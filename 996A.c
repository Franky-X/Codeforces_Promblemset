#include<stdio.h>
int main()
{
	long long int n, a[5] = {0,0,0,0,0};
	scanf("%lld", &n);
	if (n / 100)
	{
		a[0] = n / 100;
		n = n % 100;
	}
	if (n / 20)
	{
		a[1] = n / 20;
		n = n % 20;
	}
	if (n / 10)
	{
		a[2] = n / 10;
		n = n % 10;
	}
	if (n / 5)
	{
		a[3] = n / 5;
		n = n % 5;
	}
	a[4] = n;
	printf("%lld", a[0] + a[1] + a[2] + a[3] + a[4]);
}