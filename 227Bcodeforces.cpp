#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	int arr[n];
	map<int,int> m;
	map<int,int> p;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]=i+1;
	}
	for(int i=n-1;i>=0;i--)
	{
		p[arr[i]]=n-i;
	}
	int q;
	cin>>q;
	int qa[q];
	for(int i=0;i<q;i++)
	{
		cin>>qa[i];
	}
	int ans1=0,ans2=0;
	for(int i=0;i<q;i++)
	{
           ans1+=m[qa[i]];
           ans2+=p[qa[i]];
	}
	cout<<ans1<<" "<<ans2;

}