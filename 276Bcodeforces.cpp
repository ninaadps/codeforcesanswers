#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    ll sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    ll ans=-1;
    
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='W')
    	{
    		if(sx>ex)
    		{
    			sx--;
    		}
    	}
    	if(s[i]=='E')
    	{
    		if(sx<ex)
    		{
                sx++;
    		}
    	}
    	if(s[i]=='N')
    	{
    		if(sy<ey)
    		{
                sy++;
    		}
    	}
    	if(s[i]=='S')
    	{
    		if(sy>ey)
    		{
                sy--;
    		}
    	}
      if(sx==ex && sy==ey)
      {
      	ans=i+1;
      	break;
      }

    }
    cout<<ans;
}