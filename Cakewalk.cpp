#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        unsigned long long x=1;
        vector<unsigned long long> arr;
        unsigned long long a[18],b[15];
        arr.push_back(1);
        for(int i=0;i<18;i++)
        {
            x=x*10;
            a[i]=x;
            arr.push_back(x);
        }
        x=1;
        for(int i=0;i<15;i++)
        {
            x=x*20;
            b[i]=x;
            arr.push_back(x);
        }
        for(int i=0;i<18;i++)
        {
            for(int j=0;j<15;j++)
            {
                arr.push_back(a[i]*b[j]);
            }
        }
        sort(arr.begin(),arr.end());
        
        auto it=find(arr.begin(),arr.end(),n);
        if(it==arr.end())
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
    }
    return 0;
}