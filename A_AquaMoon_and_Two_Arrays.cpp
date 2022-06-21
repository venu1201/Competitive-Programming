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
        vector<long long int> a(n);
        vector<long long int> ans1;
        vector<long long int> ans2;
        for(auto &x:arr)
        {
            cin>>x;
        }
        for(auto &val:a)
        {
            cin>>val;
        }
        long long int l=0,sum1=0;
        while(l<n)
        {
            if(arr[l]<a[l])
            {
                ans1.push_back(l+1);
                arr[l]++;
                sum1++;
            }
            else if(arr[l]>a[l])
            {
                ans2.push_back(l+1);
                arr[l]--;
                sum1--;
            }
            else
            {
                l++;
            }
        }
        if(sum1==0)
        {
            cout<<ans1.size()<<endl;
            for(long long int i=0;i<ans1.size();i++)
            {
                cout<<ans2[i]<<" "<<ans1[i]<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
        
        
    }
return 0;
}