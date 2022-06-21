#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        long long int n=str.length();
        int check=0;
        if(n<=3)
        {
            cout<<"Error"<<endl;
            continue;
        }
        if(str[0]==60 && str[1]==47 && str[n-1]==62)
        {
            for(long long int i=2;i<n-1;i++)
            {
                if((str[i]>=48 && str[i]<=57) || (str[i]>=97 && str[i]<=122))
                {
                    continue;
                }
                else
                {
                    check=1;
                    break;
                }

            }
            if(check==1)
            {
                cout<<"Error"<<endl;
            }
            else
            {
                cout<<"Success"<<endl;
            }
        }
        else
        {
            cout<<"Error"<<endl;
        }
    }
    return 0;
}