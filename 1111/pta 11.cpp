#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int a, b;
    stack<int> S;

    while (scanf("%s", s) != EOF)
    {
        if (s[0] == '+')
        {
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(a + b);
        }
        else if (s[0] == '-')
        {
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(a - b);
        }
        else if (s[0] == '*')
        {
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(a * b);
        }
        else
            S.push(atoi(s));//将字符串数字转化为整形数字
    }
    cout<<S.top()<<endl;

    return 0;
}