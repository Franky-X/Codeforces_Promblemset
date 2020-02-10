#include <stdio.h>
int main()
{
	int n, m, i = 0, flag = 0, j = 0;
	char str[6010];
	scanf("%d", &n);
	n *= 6, m = n;
	getchar();
	while (n--)
	{
		str[i] = getchar();
		i++;
	}
	for (i = 1; i < m; i++)
	{
		if (str[i] == 'O' && str[i - 1] == 'O')
		{
			str[i] = '+', str[i - 1] = '+';
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		printf("YES\n");
		for (i = 0; i < m; i++)
			printf("%c", str[i]);
	}
	else	printf("NO\n");

}