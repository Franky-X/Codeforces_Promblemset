#include<stdio.h>
void PrintCol(long long int y)
{
	if (y)
	{
		PrintCol((y-1)/26);
		putchar(65+(y-1)%26);
	}
}

int main()
{
	char str[64], * p;
	long long int n, x, y,m;
	scanf("%lld", &n);
	m = n;
	getchar();
	while (n--)
	{
		gets(str);
		if (sscanf(str, "%*c%lld%*c%lld", &x, &y) == 2)
		{
			PrintCol(y);
			printf("%lld\n", x);
		}
		else
		{
			for (x = 0, p = str; *p > 64; ++p)
			{
				x = x * 26 + *p - 64;
			}
			printf("R%sC%lld\n",p , x);

		}

	}
}