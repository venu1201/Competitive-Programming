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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string str;
        cin>>str;
        vector<int> check=arr;
        
        int cnt=count(str.begin(),str.end(),'S');
        if(is_sorted(arr.begin(),arr.end()))
        {
            cout<<0<<endl;
        }
        else if(cnt==0 || cnt==str.length())
        {
            cout<<-1<<endl;
        }
        else if(str[0]!=str[str.length()-1] )
        {
            cout<<1<<endl;
        }
        else
        {
            sort(check.begin(),check.end());
            int x=-1,y=-1;
            for(int i=0;i<n;i++)
            {
                if(check[i]!=arr[i] && x==-1)
                {
                    x=i;
                }
                else if(check[i]!=arr[i] && x!=-1)
                {
                    y=i;
                }
            }
            if(str[x]!=str[y])
            {
                cout<<1<<endl;
            }
            else
            {
                char cx=str[x];
                if(str[x]=='S')
                {
                    cx='N';
                }
                else
                {
                    cx='S';
                }
                int aa=count(str.begin(),str.begin()+x,cx);
                int bb=count(str.begin()+y,str.end(),cx);
                int cc=count(str.begin()+x,str.end(),cx);
                int dd=count(str.begin(),str.begin()+y,cx);
                if(aa!=0 || bb!=0)
                {
                    cout<<1<<endl;
                }
                else
                {
                    if(cc==0 || dd==0)
                    {
                        cout<<-1<<endl;
                    }
                    else
                    {
                        cout<<2<<endl;
                    }
                }

            }
        }
    }
return 0;
}