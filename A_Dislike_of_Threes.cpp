#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    vector<long long int> arr;
    for(long long int i=1;i<=10000;i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            arr.push_back(i);
        }
    }
    while(T--)
    {
        long long int k;
        cin>>k;
        cout<<arr[k-1]<<endl;
    }
}