#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        string s,s2;
        long long int x=0,y=0;
       for(long long int i=0;i<n;i++)
        {
            string str;
            cin>>str;
           if(i==0)
           {
               s=str;
           }
           if(s==str)
           {
               x++;
           }
           else
           {
               s2=str;
               y++;
           }
        }
        if(x==y)
        {
            cout<<"Draw"<<endl;
        }
        else if(x>y)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s2<<endl;
        }
        
        

        
      
        
        

    }
      return 0;
}