#include<stdio.h>
int main()
{
	long long int n, m, k;
	scanf("%lld%lld%lld", &n, &m, &k);
	if (n <= m && n <= k)
		printf("Yes\n");
	else
		printf("No\n");
}