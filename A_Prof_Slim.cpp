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
        int n;
        cin>>n;
        vector<int> arr(n);
        map<int,int> mp1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                mp1[arr[i]]=i;
            }
        }
    
        auto it=mp1.begin();
        for(int i=0;i<n;i++)
        {
            if(it==mp1.end())
                    break;
            if(arr[i]>0)
            {
                swap(arr[i],arr[it->second]);
                it++;
            }
            if(is_sorted(arr.begin(),arr.end()))
                break;
        }
        for(auto it:arr)
        {
            cout<<it<<" ";
        }cout<<endl;
        if(is_sorted(arr.begin(),arr.end()))
            yes
        else
            no
        
        
    }
return 0;
}




for(int i=0;i<n;i++)
    {
        if((strcmp(arr[i].position,"treasurer")==0 || strcmp(arr[i].position,"secretary")==0) 
        && (arr[i].amount_collected >100000 || arr[i].amount_donated>100000) &&
        strcmp(arr[i].level,"diamond")==0 )
        {
            qualified[x][20]=arr[i].name;
            x++;
        }
        else if(2022-arr[i].year_of_joining>=5 && ((arr[i].amount_collected >=50000 || arr[i].amount_donated>=50000)))
        {
            qualified[x][20]=arr[i].name;
        }
        else if(strcmp(arr[i].level,"silver")==0 && 2022-arr[i].year_of_joining>=2 )
        {
            qualified[x][20]=arr[i].name;
        }
    }