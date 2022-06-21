#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,high=-9999999999,less=999999999999,preh=-1,prel=-1;
        cin>>n;
        vector<pair<long long int,int >> arr;
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            if(x>high)
            {
                high=x;
                preh=i;
            }
            if(x<less)
            {
                less=x;
                prel=i;
            }
        }   
        if(preh>prel)
        {
            cout<<less<<" "<<high<<endl;
        }  
        else
        {
            cout<<high<<" "<<less<<endl;
        }  
    }
    return 0;
}