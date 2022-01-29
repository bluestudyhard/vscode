#include <bits/stdc++.h>
using namespace std;
int p(int x)
{
    int sum = 0;
    int j;
    for (j = 1; j < x; j++)
        if (x % j == 0)
            sum += j;
    if (sum != x)
        return 0;
    return 1;
}
int main()

    int n, i, j, sum = 0, m;
    cin >> n >> m;
    for (i = n; i <= m; i++)
    {
        if (p(i))
        {
            printf("%d = 1 ", i);
            for (j = 2; j < i; j++)
                if (i % j == 0)
                    printf("+ %d ", j);
            cout << endl;
        }
    }
}