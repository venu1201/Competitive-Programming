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
        vector<long long int> arr(n);
        long long int a=-999999999,b=9999999999,x,y;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(a<arr[i])
            {
                a=arr[i];
                x=i;
            }
            if(b>arr[i])
            {
                b=arr[i];
                y=i;
            }
        }
        vector<long long int> ax={min(x,y)+1,max(x,y)+1,min(x,y)+1+(arr.size()-max(x,y))};
        sort(ax.begin(),ax.end());
        cout<<ax[0]<<endl;
        
          
    }
return 0;
}