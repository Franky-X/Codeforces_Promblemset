#include<stdio.h>
int main()
{
	int m, n, a[100000], pre[100000], suf[100000], s, max = 0, q = 0;
	scanf("%d", &n), m = n;
	while (n--)
		scanf("%d", &a[n]);
	pre[0] = ~0;
	for (int i = 0; i < m; i++)
		pre[i + 1] = pre[i] & (~a[i]);
	suf[m] = ~0;
	for (int i = m; i > 0; i--)
		suf[i - 1] = suf[i] & (~a[i - 1]);
	for (int i = 0; i < m; i++)
	{
		s = a[i] & pre[i] & suf[i + 1];
		if (s > max)	max = s, q = i;
	}
	printf("%d ", a[q]);
	while (m--)
	{
		if (m != q)
			printf("%d ", a[m]);
	}
}