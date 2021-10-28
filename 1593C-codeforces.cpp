#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      ll n;
      int k;
      cin>>n>>k;
      ll arr[k];
      for(int i=0;i<k;i++)
      {
          cin>>arr[i];
      }
      sort(arr,arr+k,greater<int>());
      ll c=0,sum=0;
      for(int i=0;i<k;i++)
      {
          ll x=arr[i];
          if(x<=c)
          break;
          ll d=n-x;
          c+=d;
          sum++;
      }
      cout<<sum<<endl;
      
    }
    
    
}