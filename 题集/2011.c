#include <stdio.h>
int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        int i = 1;
        int sum = 1;
        for (i = 1; i < n; i++)
        {
            sum = (sum + 1) * 2;
        }

        printf("%d\n", sum);
    }
}