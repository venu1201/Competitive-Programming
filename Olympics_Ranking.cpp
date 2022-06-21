#include<iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>> arr(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i].first.first=x;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i].first.second=x;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        
       cout<<arr[i].first.first<<" "<<arr[i].first.second<<" "<<arr[i].second<<endl;
    }
    return 0;
}