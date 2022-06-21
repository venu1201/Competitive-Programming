#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T>0)
    {
        long long int n,x;
        cin>>n;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            
            cin>>x;
            arr.push_back(x);
           
        }
        long long int count=0,i=0;
        sort(arr.begin(),arr.end());
        while(i<n)
        {
            
            
                x=std::count(arr.begin(),arr.end(),arr[i]);
                
                count+=min(x,arr[i]-1);
                i+=x;
            
            
        }
        cout<<count<<endl;
        T--;
    }
    return 0;
}