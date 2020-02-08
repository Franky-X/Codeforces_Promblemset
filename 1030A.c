#include<stdio.h>
int main()
{
	int n, i = 0 , k, flag=0 ;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		if (k == 1)
			flag++;
	}
	if (flag == 0)
		printf("EASY\n");
	else
		printf("HARD\n");
}