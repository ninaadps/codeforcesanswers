#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s1[250],s2[250];
	gets(s1);
	gets(s2);
	map<char,int> m1;
	for(int i=0;s1[i]!='\0';i++)
	{
		    if(isalpha(s1[i]))
			m1[s1[i]]++;
		
	}
	int flag=1;
	for(int i=0;s2[i]!='\0';i++)
	{    if(isalpha(s2[i]))
		{
		 m1[s2[i]]--;
			if((m1[s2[i]]) < 0)
			{
                flag=0;
                break;
			}
		}
		
	}
	if(flag==1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}

}