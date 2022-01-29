/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    double sum = 0,i;
    int l = s.size();
    for (i = 0;i<s.size();i++)
    {
            if (s[i]-'0'==2)
                sum++;
    }
            if (s[0]=='-')
                printf("%.2f%",sum/i*1.5*1.00);
            else if ((s[l]-'0')%2==0)
                printf("%.2f%",sum/i*2.0*1.00);
            else if (s[0]=='-'&&(s[l]-'0')%2==0)
                printf("%.2f%",sum/i*2.0*1.5*1.00);
    else printf("%.2f%",sum/i*1.00);
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, i, j, a[20];
    cin >> n >> x;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0, j = n - 1; i < n; i++, j--)
        {
            if (a[i] == a[j])
            {
                cout << "Invalid Value";
                break;
            }
        }
    for (i = 0, j = n - 1; i < n; i++, j--)
    {
        double mid = (j + i) / 2.0;
        // printf("[%d,%d][%.f]\n",i,j,mid);
        if (x < mid)
        {
            j = mid - 1;
            printf("[%d,%d][%.f]\n", i, j, mid);
        }
        if (x > mid)
        {
            i = mid + 1;
            printf("[%d,%d][%.f]\n", i, j, mid);
        }
        if (x == mid)
            cout << i;
    }
}
/*/
