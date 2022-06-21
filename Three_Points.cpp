#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int direction,l=0;
        vector<pair<long long int,long long int>> arr(3);
        for(int i=0;i<3;i++)
        {
            long long int a,b;
            cin>>a>>b;
            arr[i].first=a;
            arr[i].second=b;
        }
        if(arr[0].first==arr[1].first)
        {
            direction=arr[1].second-arr[0].second;
            if(direction==0)
            cout<<"YES"<<endl;
            else if(arr[1].first==arr[2].first)
            cout<<"YES"<<endl;
            else if((direction>0 && arr[2].second-arr[1].second>=0) || (direction<0 && arr[2].second-arr[1].second<=0) )
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        }
        else if(arr[0].second==arr[1].second)
        {
            direction=arr[1].first-arr[0].first;
            if(direction==0)
            cout<<"YES"<<endl;
            else if(arr[1].second==arr[2].second)
            cout<<"YES"<<endl;
            else if((direction>=0 && arr[2].first-arr[1].first>=0) || (direction<=0 && arr[2].first-arr[1].first<=0) )
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            long long int d1=arr[1].first-arr[0].first;
            long long int d2=arr[1].second-arr[0].second;
            if(d1==0 && d2==0)
            cout<<"YES"<<endl;
            else
            if((d1>0&&arr[1].second==arr[2].second&&arr[2].first-arr[1].first>=0)||(d1<0&&arr[1].second==arr[2].second&&arr[2].first-arr[1].first<=0) )
            cout<<"YES"<<endl;
            else if((d2>0&&arr[1].first==arr[2].first&&arr[2].second-arr[1].second>=0)||(d2<0&&arr[1].first==arr[2].first&&arr[2].second-arr[1].second<=0) )
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
    
}