#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m;
        cin>>n>>m;
        map<int,vector<string>> mp;
        for(long long int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            mp[count(str.begin(),str.end(),'1')].push_back(str);
        }
        string test="";
        for(auto it:mp)
        {
            sort(it.second.begin(),it.second.end());
            for(long long int i=it.second.size()-1;i>=0;i--)
            {
                test+=it.second[i];
            }
        }
       
        long long int j=0;
        long long int sum=0,k=0;
        for(long long int i=j;i<test.length();i++)
        {
            if(test[i]=='0')
            {
                sum+=k;
                
            }
            else if(test[i]=='1')
            {
                k++;
            }
        }
        cout<<sum<<endl;
        
        
    }
return 0;
}