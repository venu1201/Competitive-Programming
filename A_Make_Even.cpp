#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        long long int x=n;
        if(n%2==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        vector<int> arr;
        while(n>0)
        {
            arr.push_back(n%10);
            n=n/10;
        }
        
     reverse(arr.begin(),arr.end());
        
        
        int check=1,in=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                in=i;
                check=0;
                break;
            }
        }
        if(check==1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        if(in==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
       


    }
return 0;
}