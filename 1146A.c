#include<stdio.h>
int main()
{
	char c=' ';
	int a=0,n=0;
	while (c != '\n')
	{
		c = getchar();
		if (c == 'a')
			a++;
		n++;
	}
	if (a > ((n-1) / 2))	printf("%d", n-1);
	else                printf("%d", 2 * a - 1);
}