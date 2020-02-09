#include<stdio.h>
int main()
{
	long long int a[100];
	int q,i=0;
	scanf("%d", &q);
	for(i=0;i<q;i++)
		scanf("%lld", &a[i]);
	for (i = 0; i < q; i++)
	{
		if (a[i] == 2)
			printf("2\n");
		else if (a[i] % 2 == 0)
			printf("0\n");
		else
			printf("1\n");
	}
}