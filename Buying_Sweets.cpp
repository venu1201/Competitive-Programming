#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n,s;
        cin>>n>>s;
        int a[n],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int min=*min_element(a,a+n);
        
        
        if(sum/s==(sum-min)/s)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<sum/s<<endl;
        }
    }
    return 0;
}