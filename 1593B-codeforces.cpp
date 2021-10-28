#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll a=1e9;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                ll num= 10 * (s[i]-'0')+ (s[j]-'0');
                if(num%25==0)
                {
                    ll rem=i+2;
                    a=min(a,s.size()-rem);
                }
            }
        }
        cout<<a<<endl;
    }
  
    
    return 0;
}