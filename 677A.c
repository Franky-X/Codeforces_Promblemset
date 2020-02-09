#include <stdio.h>
int main()
{
	int n, fh, ph,w=0;
	scanf("%d%d", &n, &fh);
	while (n--)
	{
		scanf("%d", &ph);
		if (ph > fh)	w += 2;
		else  w++;
	}
	printf("%d\n", w);
}