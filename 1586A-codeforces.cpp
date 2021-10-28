#include <bits/stdc++.h>
using namespace std;
  
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],b[n],sum=0;
       for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0||!isPrime(sum)){
            cout<<n<<endl;
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        int temp=-1;
        for(int i=0;i<n;i++){
            if((sum-arr[i])%2==0){
                temp=arr[i];
                break;
            }
        }
        bool flag=1;
        cout<<n-1<<endl;
        for(int i=0;i<n;i++){
            if(flag&&arr[i]==temp){
                flag=0;
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}