#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	ll sum;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		sum+=num;
	}
	int c=0;
	for(int i=1;i<=5;i++)
	{if((sum+i) %(n+1)!=1)
	{
		c++;
	}
}
	
	cout<<c<<endl;
}