#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max=*max_element(arr,arr+n);
        auto it=std::find(arr,arr+n,max);
        auto l=distance(arr,it);
        auto c=count(arr,arr+n,max);
        if(c>=2)
        {
            for(int i=n-1;i>l;i--)
            {
                if(arr[i]==max)
                {
                    l=i;
                    break;
                }
            }
        }
        cout<<l<<" ";
        cout<<max+l<<endl;
    }
    return 0;
}