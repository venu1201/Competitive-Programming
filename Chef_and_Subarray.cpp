#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int n;
    cin>>n;
    int cnt=0,max=0,pro=1;
    for(long long int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        pro*=x;
        if(pro==0)
        {
            cnt=0;
            pro=1;
            continue;
            
        }
        cnt++;
        if(cnt>max)
        {
            max=cnt;
        }
    }
    cout<<max<<endl;
return 0;
}