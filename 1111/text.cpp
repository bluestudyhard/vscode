/*#include <iostream>
using namespace std;
int main()
{		int n,m,i,j,b,d,a[10000]={0},c[10000]={0},sum = 0;
		cin >> n >> m;
		while(n--)
		{		for (i = 1;i<=m;i++)
					cin >> b;
					a[i]=b;
					sum +=b;
					c[i]=sum;
		}
		for (i = 1;i<=m;i++){
			for (j = i+1;j<=m;j++)
			if (c[i]>c[j])
				c[i]=d;
				c[i]=c[j];
				c[j]=d;
}
			printf("%d",c[i]);
}
/*
/*/

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a[26] = {0};
	int b=0;
	getline(cin, s); //输入有空格的字符串
	for (int i = 0; i < s.size(); i++)
	{		if(s[i]>='A'&&s[i]<='Z'&&a[s[i]-'A']==0)//标记字符串
		{
			cout <<s[i];//满足条件的大写先输出
					a[s[i]-'A']=1;//将输出过的大写字符设为1，这样剩下的
					b = 1;
		}
	}
	if (b == 0)
		printf("Not Found");
}
/*/
/*/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] < 'Z')
		{
			s[i] = tolower(s[i]);
			s[i]++;
			continue;
		}
		if (s[i] == 'Z')
		{
			s[i] = 'a';
			continue;
		}
		if (s[i] >= 'a' && s[i] < 'z')
		{
			s[i] = toupper(s[i]);
			s[i]++;
			continue;
		}
		if (s[i] == 'z')
		{
			s[i] = 'A';
			continue;
		}
	}
	cout << s;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int sum, i, j = 0;
	getline(cin, s);
	sum = s.size();
	for (i = 0; i < s.size(); i++)
	{

		if (s[i] == ' ')
			sum--;
	}

	cout << sum;
}

#include <stdio.h>
#include <math.h>
int main()
{
	double y;
	int x, z;
	scanf("%d", &x);
	if (x == 0)
		y = 23.0 / 7.0 + 4;
	if (x < 0)
	{
		z = pow(x, 3) + 4;
		y = abs(z) * (23.0 / 7.0);
	}
	if (x <= 6&&x>0){
		y = (log(16) / log(3)) * (log(x) / log(3));}
	else    if (x>6)
    {
		y = (pow(x,2) + (4.0 * x) - 6)/27.0*5.0;
    }
    printf("%.3f", y);
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s, s1, s2,d,s3;
	int n, i, j, a, b, c, e, f;
	cin >> n >> s;
	for (i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> s1;
			s = s + s1;
			cout << s << endl;
		}
		if (a == 2)
		{
			cin >> b >> c;
			d = s.substr(b, c);//截取
			s = d;
			cout << s << endl;
		}
		if (a==3)
		{	cin>>e>>s2;
			s = s.insert(e,s2);//插入
			cout<<s<<endl;
		}
		if (a==4)
		{	cin>>s3;
			if(s.find(s3)<s.size())
				cout<<s.find(s3)<<endl;//查找
			else
			cout<<-1<<endl;
		}
	}

}
/*/
/*#include <bits/stdc++.h>
using namespace std;
int search(int a[], int word, int n)
{
	int i = 0;
	a[n] = word;
	while (a[i] != word) //including if ()
		i++;
	return i != n; // 表示，在i到最后一位前，一直输出
}
int main()
{
	int n, m, i, sum = 0, word, a[100001], number;
	cin >> n;
	for (i = 0; i < n; i++)
	{	cin>>a[i];
		//cin >> number;
		//a[i] = number;
	}
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> word;
		if (search(a, word, n))//找到相同的数字标记，就加一
			sum++;
	}
	cout << sum;
}
/*#include <bits/stdc++.h>
using namespace std;
int main ()
{	int n,m,i,j;
	char a[105][105],digit;
	cin>>n>>m;
	for (i = 0;i<n;i++)
		for (j = 0;j<n;j++)
		{	cin>>digit;
			a[i][j] = digit;

		}
}
/*#include <stdio.h>
int main()
{
	float x, y, a;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += .05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y < 0.0f ? 'x' : ' ');
		}
		Sleep(100);
		putchar('\n');
	}

	getchar();
	return 0;
}
int F(int n) //斐波那契数列函数 递归形式
{
	if (n == 0) //初始化
		return 0;
	if (n == 1 || n == 2)
		return 1;
	return F(n - 1) + F(n - 2); //如果n != 1 && n != 2 进行递归运算
}
#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n, int x) //设置参数
{
	cout << x << " = ";
	for (int i = 0; i < n - 1; i++)
		cout << a[i] << " + ";
	cout << a[n - 1] << endl;
}
int main()
{
	int n, m, i, j, a[1000] = {0}, sum = 0, k;
	bool f = 0;
	cin >> n >> m;
	for (i = n; i <= m; i++)
	{
		sum = 0,k=0;
		for (j = 1; j <= i / 2; j++)
			if (i % j == 0)
			{
				sum += j;
				a[k++] = j;
			}
		if (sum == i)
		{
			f = true;		//判断有条件，有东西能输出
			print(a, k, i); //
		}
	}
	if (f == 0)
		cout << "None";
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j, k;
	for (i = 0; i <= 100; i++)
		for (j = 0; j <= 100; j++)
			for (k = 0; k <= 100; k++)
			{
				if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 0)
				{
					printf("%d %d %d", i, j, k);
				}
			}
	return 0;
}

/*/
#include <stdio.h>
int main()
{
	int i, j, k,n;
	scanf("%d",&n);
		for (i = 1; i <= 20; i++)
			for (j = 1; j <= 33; j++)
				for (k = 1; k <=99; k++)
				{
					if (5 * i + 3 * j + k / 3 == 100 && k % 3 == 0 && i + j + k == 100)
					{
						printf("%d %d %d", i, j, k);
					}
				}
	return 0;
}