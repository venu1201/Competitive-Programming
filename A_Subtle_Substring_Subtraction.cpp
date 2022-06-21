#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
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
        int sum=0;
        for(int it:str)
        {
            sum+=(it-96);
        }
        
        if(str.size()%2==0)
        {
            cout<<"Alice"<<" "<<sum<<endl;
        }
        else
        {
            if(str.size()==1)
            {
                cout<<"Bob"<<" "<<sum<<endl;
            }
            else
            {
                int x=min(str[0]-96,str[str.size()-1]-96);
                if(x>sum-x)
                {
                    cout<<"Bob"<<" "<<2*x-sum<<endl;
                }
                else
                {
                    cout<<"Alice"<<" "<<sum-2*x<<endl;
                }
            }
        }
    }
return 0;
}