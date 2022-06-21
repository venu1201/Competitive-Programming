#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long int,long long int> a,pair<long long int,long long int> b)
{
    return a.first>b.first;
}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        vector<pair<long long int,long long int>> arr(3);
        vector<long long int> least;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i].first;
            least.push_back(arr[i].first);
        }
        for(int i=0;i<3;i++)
        {
            cin>>arr[i].second;
        }
        
        long long int time=0,sum=0,j=0,n=240;
        while(time<240 && j<3)
        {
            
            long long int l,max=-1,test,pos,ch;
            for(int i=0;i<3;i++)
            {
                if(arr[i].first!=-1)
                {
                    l=n/arr[i].first;
                    if(l>=20)
                    {
                    l=20;
                    }
                test=l*arr[i].second;
                if(max<test)
                {
                    max=test;
                    pos=i;
                    ch=l;

                }
                }
            }
           
          
            time+=arr[pos].first*ch;
            sum+=max;
           
            j++;
            
            n=240-time;
           
            arr[pos].first=-1;
        
        }
        cout<<sum<<endl;
    }
    return 0;
}