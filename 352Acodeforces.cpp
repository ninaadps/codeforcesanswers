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
	int n;
	cin>>n;
	int a[n];
	int fv=0,zr=0;
	fr(i,n)
	{
		cin>>a[i];
		if(a[i]==5)
		{
			fv++;
		}
		else
		{
			zr++;
		}
	}
	if(zr==0)
	{
		cout<<-1<<endl;
	}
	else if(fv<9)
	{
		cout<<0<<endl;
	}
	else
	{   
		int c=fv/9;
		for(int i=0;i<9*c;i++)
		{
			cout<<5;
		}
		for(int i=0;i<zr;i++)
		{
			cout<<0;
		}

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