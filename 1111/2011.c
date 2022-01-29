#include <stdio.h>
int main()
{
    int n, m;
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            double sum = 0;
            scanf("%d", &m);
            int i;
            for (i = 1; i <= m; i++)
            {
                if (i % 2 == 1)
                    sum += 1 / (double)i;
                else
                    sum += -1 / (double)i;
            }
            printf("%.2f\n", sum);
        }
    }
    return 0;
}