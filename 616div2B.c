#include <stdio.h>
int main()
{
	int t, n, a[300000], max = 0, flag1 = -2, i = 0, flag2 = -1;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for ( i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < n ; i++)
		{
			if (a[i] < i )	break;
			flag1 = i;
		}
		for (i = n - 1; i >= 0; i--)
		{
			if (a[i] < n - i - 1)	break;
			flag2 = i;
		}
		if (flag1 >= flag2)
			printf("Yes\n");
		else printf("No\n");
		flag1 = -2;
		flag2 = -1;
	}
}