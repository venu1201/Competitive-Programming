#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n;
        cin >> n;
        string str;
        map
        cin >> str;
        for(long long int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(str[i]==49)
                {
                    str[i]=97;
                    if(str[i+1]!=49)
                    {
                    str[i+1]=97;
                    }
                }
            }
            else if(i==n-1)
            {
                if(str[i]==49)
                {
                    str[i]=97;
                    if(str[i-1]!=49)
                    {
                        str[i-1]=97;
                    }
                }
            }
            else
            {
                if(str[i]==49)
                {
                    str[i]=97;
                    if(str[i-1]!=49)
                    str[i-1]=97;
                    if(str[i+1]!=49)
                    str[i+1]=97;
                }
            }
        }
        long long int count=0;
        for(long long int j=0;j<n;j++)
        {
            if(str[j]==48)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}