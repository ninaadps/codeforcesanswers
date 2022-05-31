#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	cin>>n;
    vector<ll> v;
    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
    	ll num;
    	cin>>num;
    	v.push_back(num);
    	m[num]++;
    }
    ll x=*max_element(v.begin(),v.end());
    ll y=*min_element(v.begin(),v.end());
    ll ans=x-y;
    ll prd=m[x]*m[y];
    if(x==y)
    {
    	cout<<0<<" "<<(m[y] * (m[y]-1) )/2;
    }
    else
    {
    cout<<ans<<" "<<prd;
    }
}