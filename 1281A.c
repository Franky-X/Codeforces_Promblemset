#include<stdio.h>
int main()
{
	int t,i=0;
	char c[1010] = { ' ' },ch;
	scanf("%d", &t);
	getchar();
	while (t--)
	{
		while ((ch = getchar()) != '\n')
			c[i++] = ch;
		switch (c[i-1])
		{
		case 'o':   printf("FILIPINO\n");	break;
		case 'u':	printf("JAPANESE\n");	break;
		case 'a':	printf("KOREAN\n");		break;
		}
		i = 0;
	}
}