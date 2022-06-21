#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,p;
    cin>>n>>k>>p;
    vector<pair<long long int,long long int>> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(make_pair(x,i));
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<p;i++)
    {
        int a,b,j=0;
        cin>>a>>b;   
        a=arr[a-1].first;
         b=arr[b-1].first;
    
        int check=0;
       while()
       {
           if
       }
        if(check==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}