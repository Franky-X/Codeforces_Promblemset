#include <stdio.h>
int main()
{
	long long int n, k, i = 0;
	scanf("%lld", &n);
	if (n % 2 != 0)
	{
		k = (n / 2);
		printf("%lld\n", k);
		for (i = 0; i < k-1; i++)		printf("2 ");
		printf("3\n");
	}
	else
	{
		printf("%lld\n", n / 2);
		for (i = 0; i < n / 2; i++)
			printf("2 ");
		printf("\n");
	}
}