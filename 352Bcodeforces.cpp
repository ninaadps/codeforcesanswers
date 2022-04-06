#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v[100001];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v[x].push_back(i);
	}
	vector<pair<int,int>> ans;
	for(int i=0;i<100001;i++)
	{
		if(v[i].size()==0)
		{
			continue;
		}
		else if(v[i].size()==1)
		{
			ans.push_back({i,0});

		}
		else
		{
			int d=v[i][1]-v[i][0];
          bool flag=true;
          for(int j=1;j<v[i].size();j++)
         {
             if(v[i][j]-v[i][j-1]!=d)
             {
               flag=false;
               break;
             }
          }
          if(flag)
          {
            ans.push_back({i,d});
          }
        }
	}
	cout<<ans.size()<<endl;
     for(int i=0;i<ans.size();i++)
      {
         cout<<ans[i].first<<" "<<ans[i].second<<"\n";
      }   
	
}