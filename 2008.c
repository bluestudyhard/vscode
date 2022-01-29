#include <stdio.h>
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        if (n == 0)
            break;
        int a = 0, d = 0, c = 0;
        double b[100];
        int i;
        for (i = 0; i < n; i++)
            scanf("%lf", &b[i]);

        for (i = 0; i < n; i++)
        {
            if (b[i] < 0)
                a++;
            else if (b[i] == 0)
                d++;
            else
                c++;
        }

        printf("%d %d %d\n", a, d, c);
    }
}