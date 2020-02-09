#include <stdio.h>
int main()
{
	int n, x[100], m, n1,i=1;
	scanf("%d", &n);
	n1 = n;
	while (n--)
	{
		scanf("%d", &m);
		x[m] = i;
		i++;
	}
	for (m = 1; m <= n1; m++)
		printf("%d ", x[m]);
}