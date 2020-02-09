#include<stdio.h>
struct mag {
	char a, b;
};
int main()
{
	long long int n, i = 1, m = 0;
	struct mag x[100000];
	scanf("%lld", &n);
	getchar();
	scanf("%c%c", &x[0].a, &x[0].b);
	getchar();
	n--;
	while (n--)
	{
		scanf("%c%c", &x[i].a, &x[i].b);
		getchar();
		if (x[i].a == x[i - 1].b)	m++;
		i++;
	}
	printf("%lld\n", m+1);
}