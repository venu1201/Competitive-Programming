#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int g,p;
        cin>>g>>p;
        long long int arr[10];
        for(long long int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        
        long long int sum=accumulate(arr+g,arr+10,0);
        long long int days=sum/p;
        sum=sum%p;
        long long int x=sum+arr[g-1];
        long long int d=x/p;
       
        if(x<=p)
        {
            cout<<days+1<<" "<<days+1<<endl;
        }
        else if(x%p==0)
        {
            cout<<days+1<<" "<<days+(x/p)<<endl;
        }
        else
        {
            cout<<days+1<<" "<<days+(x/p)+1<<endl;
        }


    }
    return 0;
}