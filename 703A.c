#include<stdio.h>
int main()
{
	int n, m, c, mw = 0, cw = 0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d%d", &m, &c);
		if (m == c);
		else if (m > c)	mw++;
		else cw++;
	}
	if (mw == cw)	printf("Friendship is magic!^^\n");
	else if (mw > cw)	printf("Mishka\n");
	else  printf("Chris\n");
}