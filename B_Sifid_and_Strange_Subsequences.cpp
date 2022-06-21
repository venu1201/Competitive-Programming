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
        vector<long long int> arr1,arr2;
        long long int cntn=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            if(x<=0)
            {
                arr1.push_back(x);

            }
            else
                arr2.push_back(x);
            
        }
        if(arr1.size()==0)
        {
            cout<<1<<endl;
            continue;
        }
        sort(arr1.begin(),arr1.end());
        long long int m=9999999999,cnt=0;
        for(long long int i=0;i<arr1.size()-1;i++)
        {
            m=min(m,abs(arr1[i]-arr1[i+1]));
        }
        for(long long int i=0;i<arr2.size();i++)
        {
            if(arr2[i]<=m)
            {
                m=min(m,abs(arr1[arr1.size()-1]-arr2[i]));
                cnt++;
                break;
            }
        }
        cout<<arr1.size()+cnt<<endl;

        
    }
return 0;
}