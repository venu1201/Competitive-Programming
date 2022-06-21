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
        string str;
        cin>>str;
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            if(str[i]!='0')
            {
            sum+=str[i]-48;
            sum++;
            }
        }
        if(str[n-1]!='0')
        {
            sum--;
        }
        cout<<sum<<endl;
    }
    return 0;
}