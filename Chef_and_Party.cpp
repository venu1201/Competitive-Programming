#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,count=0;
        cin>>n;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]<=count)
            {
                count++;
            }
            else
            break;
        }
        cout<<count<<endl;
        long long int h=999999999999999999;
        cout<<h<<endl;

    }
    return 0;
}
