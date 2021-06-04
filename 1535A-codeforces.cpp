#include<iostream>
#include<algorithm>
 
 
using namespace std;
 
 
 
 
int main()
{
    int n,arr[4],a,b;
    
    cin>>n;
    
    while(n)
    {  for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
        a=max(arr[0],arr[1]);
        b=max(arr[2],arr[3]);
        
    sort(arr,arr+4);
    if(a>b)
    {
        if(a==arr[3] && b==arr[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    else 
    {
        if(b==arr[3] && a==arr[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
        
        
        
        
        
        
        n--;
    }
    
    
    
    
    
    
    
 return 0;   
}