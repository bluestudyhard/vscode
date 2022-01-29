#include <stdio.h>
int main()
{
    int m, n, a;
    int i;
    int sum1 = 0;
    int sum2 = 0;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (m > n)
        {
            a = m;// 从右往左赋值，先把m的值放到了a，a=3，然后把n的值给m，m=1；再然后把a的值给n，实现互换
            m = n;
            n = a;
        }
        int sum1 = 0;
        int sum2 = 0; //定义要在这里，否则会导致sum没有初始化，导致计算错误
        for (i = m; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum2 += i * i;
            }
            else
                sum1 += i * i * i;
        }

        printf("%d %d\n", sum2, sum1);
    }
}