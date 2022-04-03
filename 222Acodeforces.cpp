#include<bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
    int n,k,num=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    bool flag=true;
    for(int i=k+1;i<=n;i++)
    {
        if(a[i]!=a[k]) 
            flag=false;
    }
    if(!flag)
    {
        cout<<-1<<endl;
        
    }
    
    else
    {
        int ans;
        for(ans=k-1;ans>0;ans--)
        {
            if(a[ans]!=a[k])
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}