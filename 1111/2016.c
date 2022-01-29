#include <stdio.h>
int main()
{
    int n, f[100];
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
            break;
        int i = 0, min, j, temp;

        for (i = 0; i < n; i++)
            scanf("%d", &f[i]); //输入数据
        min = f[0];             //

        for (i = 0; i < n; i++) //遍历
        {
            if (f[i] <= min)
            {
                min = f[i];
                j = i; //记录最小值的位置
            }
        }

        temp = f[0]; //交换
        f[0] = min;
        f[j] = temp;

        for (i = 0; i < n - 1; i++) //输出
            printf("%d ", f[i]);
        printf("%d\n", f[i]);
    }
    return 0;
}