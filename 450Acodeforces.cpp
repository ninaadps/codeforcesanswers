#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	
	int max=0;
	int ind=0;
	for(int i=0;i<n;i++)
	{    double a;
		cin>>a;
		if(ceil(a/m) >= max)
		{
			ind=i;
			max=ceil(a/m);
		}
	}
	cout<<ind+1<<endl;
}