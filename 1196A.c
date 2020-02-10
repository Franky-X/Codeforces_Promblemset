#include <stdio.h>
int main()
{
	int q;
	unsigned long long int a, b, c;
	scanf("%d", &q);
	while (q--)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		printf("%lld\n", (a + b + c) / 2);
	}
}