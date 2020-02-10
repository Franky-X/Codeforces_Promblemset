#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned long long int  s = 0;
	int b,a[4];
	char ch;
	scanf("%d%d%d%d",&a[0],& a[1],& a[2],&a[3]);
	getchar();
	while ( (ch=getchar())!='\n')
	{
		b = ch-48;		
		s += a[b - 1];
	}
	printf("%lld\n", s);
}