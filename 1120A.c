#include<stdio.h>
int main()
{
	long long int n,i=0,j=0;
	char str[100000];
	int a[100000];
	scanf("%lld", &n);
	getchar();
	gets(str);
	for (i = 0; i < n; i++)
	{
		if (str[i] == 'n')
		{
			a[j] = 1;
			j++;
		}
		if (str[i] == 'z')
		{
			a[j] = 0;
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		if (a[i] == 1)
			printf("%d ", a[i]);
	}
	for (i = 0; i < j; i++)
	{
		if (a[i] == 0)
			printf("%d ", a[i]);
	}
}