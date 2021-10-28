#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n],b[n];
    ll sa=0,sb=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sa+=a[i];
        sb+=b[i];
    }
    if(sa%2==0 && sb%2==0)
    {
        cout<<0;
    }
    else if(sa%2==0 || sb%2==0)
    {
        cout<<-1;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if((a[i]%2==0 && b[i]%2==1 )|| (a[i]%2==1 && b[i]%2==0))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1;
        }
        else
        {
            cout<<1;
        }
        
    }
    
}