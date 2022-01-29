#include <stdio.h>

int main()
{
	int n, m;
	while (scanf("%d", &n) != EOF)
	{
		int s = 1;
		while (n--)

		{
			scanf("%d", &m);
			if (m % 2 == 1)
				s *= m;
		}
		printf("%d\n", s);
	}
	return 0;
}
 