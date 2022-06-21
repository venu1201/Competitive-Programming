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
        long long int sum=0;
        for(long long int i=0;i<str.size();i++)
        {
            sum+=str[i]-97;
            cout<<sum<<" ";
        }
        cout<<sum<<endl;
    }
    return 0;
}