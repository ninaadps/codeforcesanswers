#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	map<int,int> m;
	int c1=0,c2=0,c3=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		m[arr[i]]++;
	}
	bool flag=true;
	for(int i=0;i<(n/3);i++)
	{
		if(m[1]>0 && m[2]>0 && m[4]>0)
		{
			c1++;
			m[1]--;
			m[2]--;
			m[4]--;
			continue;
		}
		if(m[1]>0 && m[2]>0 && m[6]>0)
		{
			c2++;
			m[1]--;
			m[2]--;
			m[6]--;
			continue;
		}
		if(m[1]>0 && m[3]>0 && m[6]>0)
		{
			c3++;
			m[1]--;
			m[3]--;
			m[6]--;
			continue;
		}
		flag=false;
		break;
	}
	if(!flag)
	{
		cout<<-1<<endl;
	}
	else
	{
		for(int i=0;i<c1;i++)
		{
			cout<<"1 2 4"<<endl;
		}
		for(int i=0;i<c2;i++)
		{
			cout<<"1 2 6"<<endl;
		}
		for(int i=0;i<c3;i++)
		{
			cout<<"1 3 6"<<endl;
		}
	}
}