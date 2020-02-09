#include<stdio.h>
int main()
{
	int n, i = 0,fs=0,sf=0;
	char c[110];
	scanf("%d", &n);
	getchar();
	gets(c);
	for (i = 0; i < n; i++)
	{
		if (c[i] == 'F' && c[i + 1] == 'S')	fs++;
		if (c[i] == 'S' && c[i + 1] == 'F')	sf++;
	}
	if (sf > fs)	printf("YES\n");
	else printf("NO\n");
}