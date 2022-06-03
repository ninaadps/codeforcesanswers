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
	int a,b,c,d,e;

	cin>>a>>b>>c>>d>>e;
	if((a+b+c+d+e)%5!=0 || (a+b+c+d+e)==0)
	{
		cout<<-1<<endl;
			}
			else
			{
				cout<<(a+b+c+d+e)/5<<endl;
			}
	}
 
int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
 
	int t = 1;
	//cin >> t;
	while (t--) solve();
 
	return 0;
}