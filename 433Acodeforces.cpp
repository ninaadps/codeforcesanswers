#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	map<int,int> m;
	for(int i=0;i<n;i++)
	{      int x;
           cin>>x;
           m[x]++;
	}
	int a=m[100];
	int b=m[200];
	int remt=b%2;
	int remh=a-(remt*2);

	if(remh >=0 && remh%2==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

}