#include<bits/stdc++.h>
using namespace std;
#define ll long long  
int main()
{
	int t;
	cin>>t;

	while(t--)
	{   ll a,b,c,ans;
		cin>>a>>b>>c;
		ans=c*3+2*b+a;
		c=ans%2;
		if(c>0)
		{
			cout<<1<<endl;
		}
		else
		{ cout<<0<<endl;
		}
		
	}
}