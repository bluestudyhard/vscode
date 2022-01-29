#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0, j = 0, k = 0;
    int x = (n + 1) / 2;
    for (i = 0; i < x; i++)
        for (j = x; j >= 0; j--)
        {
            printf("  ");
            for (k = 0; k < x; k = 2 * k + 1)
                printf("* ");
            printf("\n");
        }
}