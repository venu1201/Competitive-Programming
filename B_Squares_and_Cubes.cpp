#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    set<long long int> a;
    a.insert(1);
    for(long long int i=2;i<=1e5;i++)
    {
        a.insert(i*i);
        a.insert(i*i*i);
    }
    vector<long long int> arr;
    for(auto it:a)
    {
        arr.push_back(it);
    }
    sort(arr.begin(),arr.end());
    while(T--)
    {
        long long int n;
        cin>>n;
        auto it=lower_bound(arr.begin(),arr.end(),n);
        auto it2=upper_bound(arr.begin(),arr.end(),n);
        
        if(it==it2)
        {
            cout<<it-arr.begin()<<endl;
        }
        else
        {
            cout<<it-arr.begin()+1<<endl;
        }
        
    }
return 0;
}