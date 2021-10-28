#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int m=30,ind;
    char g;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
           int x=int(s[i]-'a');
           if(x<m)
           {
           m=x;
           g=s[i];
           ind=i;
           }
        }
        s.erase(s.begin()+ind);
        cout<<g<<" "<<s<<endl;
    }
}
