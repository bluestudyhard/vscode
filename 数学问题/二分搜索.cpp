#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, mid, i, flag = 1, a[100];
    cin >> n >> x;
    int left = 0, right = n - 1;
    for (i = 0; i < n; i++)
        cin >> a[i];
    mid = (left + right) / 2;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] >= a[i + 1])
        {
            printf("Invalid Value");
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("[%d,%d][%d]\n", left, right, mid);
        while (left <= right)
        {
            if (a[mid] == x)
            {
                cout << mid;
                break;
            }
            else if (a[mid] > x)
            {
                right = mid - 1;
                mid = (left + right) / 2;
                printf("[%d,%d][%d]\n", left, right, mid);
            }
            else if (a[mid] < x)
            {
                left = mid + 1;
                mid = (left + right) / 2;
                printf("[%d,%d][%d]\n", left, right, mid);
            }
            if (left == 0 && right == 0 && mid == 0)
            {
                cout << "Not Found";
                break;
            }
        }
    }
}
#include<stdio.h>
int BinSearch(int a[],int n,int x){
	int left=0,right=n-1,mid;
	while(left<=right){
		mid=(left+right)/2;
		printf("[%d,%d][%d]\n",left,right,mid);
		if(a[mid]==x)
			return mid;
		else if(a[mid]<x) left=mid+1;
		else right=mid-1;
	}
	return -1;
}

int main()
{
	int n,x,flag=1,ans;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){
			printf("Invalid Value");
			flag=0;
			break;
		}
	}
	if(flag){
		ans=BinSearch(a,n,x);
		if(ans==-1) printf("Not Found");
		else printf("%d",ans);
	}
	return 0;
}
