#include <stdio.h>
int main()
{
	int t, n, a[100], s = 0, m = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		while (n--)
		{
			scanf("%d", &a[n]);
			if (a[n] == 0)	m++, a[n] = 1;
                    			s += a[n];
		}
		if (s == 0)	m++;
		printf("%d\n", m);
		m = 0;
		s = 0;
	}
}
