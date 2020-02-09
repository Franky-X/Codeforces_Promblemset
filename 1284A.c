#include<stdio.h>
int main()
{
	long long int y;
	int m, n,i=0,q;
	char s[25][15],t[25][15];
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)	scanf("%s", s[i]);
	for (i = 0; i < n; i++)	scanf("%s", t[i]);
	scanf("%d", &q);
	while (q)
	{
		scanf("%lld", &y);
		printf("%s%s\n", s[(y - 1) % m], t[(y - 1) % n]);
		q--;
	}


	
}