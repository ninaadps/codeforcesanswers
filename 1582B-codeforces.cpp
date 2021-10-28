#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		 ll c1=0,c0=0,sol;
		
		ll arr[n];
		for(int i=0;i<n;i++)
		{   cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==0)
			{c1+=1;
			}
			if(arr[i]==1)
			{
				c0+=1;
			}
		}
		sol=c0*(pow(2,c1));
		cout<<sol<<endl;
	}

}