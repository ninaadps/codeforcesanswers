#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{    ll n,c=0,x,ans=0,num=0;
    cin >> n;
    x = n;
    while (x != 0) {
        x /= 10;
        c++;
    }
    for (int i = c; i > 0; i--) {
        if (i == c) {
            ans += (n - round(pow(10, i - 1)) + 1) * i;
        } else {
            num = round(pow(10, i));
            ans += (num - (num / 10)) * i;
        }
    }
    cout << ans;
}