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
        vector<int> arr(3,0);
        int ans=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='r')
            {
                arr[0]=1;
            }
            else if(str[i]=='g')
            {
                arr[1]=1;
            }
            else if(str[i]=='b')
            {
                arr[2]=1;
            }
            else
            {
                if(str[i]=='B' && arr[2]==1)
                {
                    continue;
                }
                else if(str[i]=='B' && arr[2]==0)
                {
                    ans=1;
                    break;
                }
                if(str[i]=='R' && arr[0]==1)
                {
                    continue;
                }
                else if(str[i]=='R' && arr[0]==0)
                {
                    ans=1;
                    break;
                }
                if(str[i]=='G' && arr[1]==1)
                {
                    continue;
                }
                else if(str[i]=='G' && arr[1]==0)
                {
                    ans=1;
                    break;
                }
            }
        }
        if(ans==1)
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