#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	int arr[7];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int flag=1;
	int sum=0;
	x:
	for(int i=0;i<7;i++)
	{
		sum+=arr[i];
		if(sum>=n)
		{   ans=i+1;
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		goto x;
	}
	else 
	{
		cout<<ans;
	}
}