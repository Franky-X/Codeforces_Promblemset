#include <stdio.h>
int main()
{
	long long int n, a = 0, d = 0;
	char ch;
	scanf("%lld", &n);
	getchar();
	while (n--)
	{
		ch = getchar();
		if (ch == 'A')	a++;
		else            d++;
	}
	if (a == d)	printf("Friendship\n");
	else if (a > d)	printf("Anton\n");
	else   printf("Danik\n");
}