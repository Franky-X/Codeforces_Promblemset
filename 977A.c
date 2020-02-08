#include<stdio.h>
int main()
{
	long long int n,k;
	int i = 0;
	scanf("%lld%lld", &n,&k);
	for (i = 0; i < k; i++)
	{
		if (n % 10 != 0)
			n--;
		else
			n = n / 10;
	}
	printf("%lld", n);
}