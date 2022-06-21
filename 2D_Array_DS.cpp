#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[6][6],sum=0,mx=-9999999999999;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=1;j<5;j++)
        {
            sum=arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i][j-1]+arr[i][j+1]+arr[i+2][j-1]+arr[i+2][j+1];
            mx=max(sum,mx);
        }
    }
    cout<<mx<<endl;
    return 0;
}