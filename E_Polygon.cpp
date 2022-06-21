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
        int n;
        cin>>n;
        vector<string>arr;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            arr.push_back(str);
        }
        int ch=0;
       
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[i][j]=='1' && arr[i][j+1]=='0' && arr[i+1][j]=='0')
                {
                    
                    ch=1;
                    break;
                }
            }
            if(ch==1)
            {
                break;
            }
        }
        if(ch==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
return 0;
}