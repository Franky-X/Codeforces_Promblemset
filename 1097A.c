#include<stdio.h>


int main()
{
	char strt[3], strh[16];
	int i = 0, flag=0;
	gets(strt);
	gets(strh);
	for (i = 0; i < 16; i++)
	{
		if (strt[0] == strh[i]||strt[1]==strh[i])
			flag++;
	}
	if (flag)
		printf("YES\n");
	else
		printf("NO\n");
}