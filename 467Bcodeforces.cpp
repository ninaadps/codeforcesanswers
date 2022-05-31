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
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}



void solve() {
	int n, m,k;
	cin >> n >> m>>k;
	int arr[m+1];
	int ans=0;
	for(int i=0;i<m+1;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<m;i++)
	{   int z=0;
		for(int j=0;j<n;j++)
		{
		if(((arr[i] >>j)&1) !=((arr[m] >> j)&1))
		{
			z++;
		}
		}
		if(z<=k)
		{
			ans++;
		}
	}
	cout<<ans;
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	

	int t = 1;
	// cin >> t;
	while (t--) solve();

	

	return 0;
}