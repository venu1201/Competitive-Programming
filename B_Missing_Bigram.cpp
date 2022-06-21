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
        long long int n;
        cin>>n;
        vector<string> arr;
        for(int i=0;i<n-2;i++)
        {
            string t;
            cin>>t;
            arr.push_back(t);
        }
        
        int ch=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i][1]!=arr[i+1][0])
            {
                string str="";
                str+=arr[i][1];
                str+=arr[i+1][0];
                
                arr.insert(arr.begin()+i+1,str);
                ch=1;
                break;
            }
        }
        if(ch==0)
        {
            string s="";
            s+=arr[arr.size()-1][1];
            s+="a";
            arr.push_back(s);
        }
        
        string ans="";
        ans+=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            ans+=arr[i][1];
        }
        cout<<ans<<endl;
    }
return 0;
}