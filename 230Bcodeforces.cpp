#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		ll x;
		cin>>x;
		ll s=sqrt(x);
		if(isPrime(s) && s*s==x)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}