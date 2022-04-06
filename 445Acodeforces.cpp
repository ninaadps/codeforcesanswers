#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(c[i][j]=='.' && i%2==0 && j%2==0)
			{
				c[i][j]='W';
			}
			else if(c[i][j]=='.' && i%2==0 && j%2==1)
			{
				c[i][j]='B';
			}
			else if(c[i][j]=='.' && i%2==1 && j%2==0)
			{
				c[i][j]='B';
			}
			else if(c[i][j]=='.' && i%2==1 && j%2==1)
			{
				c[i][j]='W';
			}

		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}

}