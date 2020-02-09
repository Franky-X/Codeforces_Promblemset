#include <stdio.h>
int main()
{
	int n,m;
	long long int a[100], max = 0, i = 0, s = 0;
	scanf("%d", &n), m = n;;
	while (n--)
	{
		scanf("%lld", &a[i]);
		if (a[i] > max)	max = a[i];
		i++;
	}
	for (i = 0; i < m; i++)
		s += (max - a[i]);
	printf("%lld", s);
}