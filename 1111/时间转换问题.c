#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    e = a * 60 + b;
    f = c * 60 + d;
    i = f - e;
    g = i / 60;
    h = i % 60;
    if (f - e < 0)
    {
        g = -g;
        h = -h;
        printf("%d\n%d", 24 - g, h);
    }
    else
        printf("%d\n%d", g, h);
}