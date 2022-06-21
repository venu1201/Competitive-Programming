#include<bits/stdc++.h>
using namespace std;
string bin(int n)
{
    
    string s = bitset<30> (n).to_string();
    return s;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        vector<string> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(bin(x));
        }
        string ans="";
        for(int i=0;i<arr[0].size();i++)
        {
            int cnt1=0,cnt2=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j][i]=='0')
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
            if(cnt2>cnt1)
            {
                ans+="1";
            }
            else
            {
                ans+="0";
            }
        }
        cout<<stoi(ans,0,2)<<endl;

        
    }
return 0;
}