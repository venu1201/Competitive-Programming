#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x*20);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=(arr[i]-(x*10))>0? (arr[i]-(x*10)):0;
    }
    cout<<*max_element(arr.begin(),arr.end());
}