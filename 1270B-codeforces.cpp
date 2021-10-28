#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        ll arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n-1;i++)
        {
            if(abs(arr[i+1]-arr[i])>1)
            {   flag=1;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
}