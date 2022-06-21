#include<bits/stdc++.h>
#define int long long int
using namespace std;
int cnt=0;
int check(vector<int> arr)
{
    int n=arr.size();
    int c=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            c++;
        }
        if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
        {
            c++;
        }
    }
    return c;
}
void fun(int v,vector<int> arr,int n,vector<int> a)
{
    if(v==n)
    {
        return;
    }
    if(arr.size()==n)
    {
        cnt+=check(arr);
        return;
    }
    for(int i=0;i<3;i++)
    {
        arr.push_back(i);
        fun(v,arr,n,a);
        arr.pop_back();
    }
}
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
        if(n==1 || n==2)
        {
            cout<<0<<endl;
            continue;
        }
        vector<int> ar;
        vector<int> a={0,1,2};
        fun(0,ar,n,a);
        cout<<cnt<<endl;
        cnt=0;
    }
return 0;
}