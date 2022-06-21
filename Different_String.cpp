#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m=-1;
        cin>>n;
        string test="";
        string str;
        vector<string> v;
        for(long long int i=0;i<n;i++)
        {
            cin>>str;
            v.push_back(str);
        }
        for(long long int i=0;i<n;i++)
        {
            
                if(v[i][i]=='1')
                {
                    test+='0';
                }
                else
                {
                    test+='1';
                }
            
        }
        cout<<test<<endl;
        
    }
    return 0;
}