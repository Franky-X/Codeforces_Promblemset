#include<stdio.h>

int mat(int n)
{
	int a[100][100], i = 0, j = 0;
	for (i = 0; i < n; i++)
		a[0][i] = 1, a[i][0] = 1;
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n; j++)
		{
			a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	return a[n - 1][n - 1];
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", mat(n));
}