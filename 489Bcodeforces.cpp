#include <bits/stdc++.h>
 
using namespace std;
 
#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define fr(a,x)        for(int a=0;a<x;a++)
#define fr1(a,x,y)     for(int a=x;a<y;a++)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
 
 
 
const int N = 200005;
 
void solve() {
	int n,m,c=0;
	cin>>n;
	vi v;
	fr(i,n)
	{
		int x;
		cin>>x;
		v.pb(x);
	}
	
	cin>>m;
    vi v2;
    fr(i,m)
    {
    	int z;
    	cin>>z;
        v2.pb(z);
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int l=min(n,m);
    fr(i,n)
    {
    	fr(j,m)
    	{
    		if(abs(v[i]-v2[j]) <=1)
    		{   v2[j]=1e5;
    			c++;
    			break;
    		}
    	}
    }
    cout<<c<<endl;

			}
 
int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
	int t = 1;
	//cin >> t;
	while (t--) solve();
 
	return 0;
}