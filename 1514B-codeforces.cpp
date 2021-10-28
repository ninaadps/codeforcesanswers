#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9+7;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int n,k;
    ll num=1;
        cin>>n>>k;
        
        for(int i=0;i<k;i++) 
        {num=(num*n)%MOD;
        }
        cout<<num<<endl;
    }
}