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
        vector<pair<long long int,long long int>> arr;
        
        for(long long int i=0;i<n;i++)
        {
            long long int xx,yy;
            cin>>xx>>yy;
            arr.push_back(make_pair(xx,yy));
        }
        int check=1;
        for(long long int i=1;i<n;i++)
        {
            long long int s1=abs(arr[0].first-arr[i].first);
            long long int s2=abs(arr[0].second-arr[i].second);
            double ch=((double)(s1))/((double)(s2));
            if(ch!=1)
            {
                check=0;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(check==1)
        {
            cout<<"NO"<<endl;
        }


        
    }
    return 0;
}
