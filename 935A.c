#include<stdio.h>
int main()
{
	long n, l,s=0;
	scanf("%ld", &n);
	l = n;
	while (l)
	{
		if ((n - l) % l == 0)
			s++;
		l--;
	}
	printf("%ld", s - 1);
}