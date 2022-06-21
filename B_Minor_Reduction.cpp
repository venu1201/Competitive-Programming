#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        int ch=0;
        for(int i=str.length()-1;i>=0;i--)
        {
           int x=(str[i]-48)+(str[i-1]-48);
           if(x>9)
           {
               ch=1;
               str[i]=(x%10)+48;
               str[i-1]=(x/10)+48;
               break;
           }
        }
        if(ch==1)
        {
           cout<<str<<endl;
                 
        }
        else
        {
            string c="";
            c+=(str[0]-48)+str[1];
            for(int i=2;i<str.length();i++)
            {
                c+=str[i];
            }
            cout<<c<<endl;
        }
        

    }
return 0;
}