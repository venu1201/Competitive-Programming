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
        long long int a,s;
        cin>>a>>s;
        vector<long long int> arr,ass;
        while(a>0)
        {
            arr.push_back(a%10);
            a=a/10;
        }
        while(s>0)
        {
            ass.push_back(s%10);
            s=s/10;
        }
        reverse(arr.begin(),arr.end());
        reverse(ass.begin(),ass.end());
        long long int x=ass.size()-1,y=arr.size()-1;
        vector<long long int> ans;
        
        int aa=18,ch=1;
        while(y>-1)
        {
            long long int t=ass[x];
            if(arr[y]>t)
            {
                if(x-1<0)
                {
                    ch=0;
                    break;
                }
                t=10*ass[x-1]+t;
                long long int k=t-arr[y];
                if(k>=10)
                {
                    ch=0;
                    break;
                }
                ans.push_back(k);
                aa--;
                x-=2;
                y--;
            }
            else
            {
                long long int k=t-arr[y];
                 
                ans.push_back(k);
                aa--;
                x--;
                y--;
            }
            
            if(x<0 && y>=0)
            {
                ch=0;
                break;
            }
            if(x>=0 && y<0)
            {
               
                for(int i=x;i>=0;i--)
                {
                    ans.push_back(ass[i]);
                }
                break;
            }
            
        }
        if(ch==0)
        {
            cout<<-1<<endl;
            continue;
        }
        reverse(ans.begin(),ans.end());
        if(ans[0]==0)
        {
            for(int i=0;i<ans.size();i++)
            {
                if(ans[i]==0)
                {
                    ans[i]=-1;
                }
                else
                {
                    break;
                }
            }
        }
        for(auto it:ans)
        {
            if(it==-1)
            continue;
            cout<<it;
        }cout<<endl;
    }
return 0;
}