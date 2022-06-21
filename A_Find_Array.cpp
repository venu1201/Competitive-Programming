#include<bits/stdc++.h>
using namespace std;
void siv(vector<long long int>& arr)
{
    for(int i=2;i<sqrt(1000);i++)
    {
        if(arr[i]!=1)
        {
        for(int j=i+i;j<1000;j+=i)
        {
            arr[j]=1;
        }
        }
    }
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    vector<long long int> arr;
    for(long long int i=0;i<=1000;i++)
    {
        arr.push_back(0);
    }
     siv(arr);
   
    while(T--)
    {
        long long int n,i=2;
        cin>>n;
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        while(n)
        {
            if(arr[i]==0)
            {
                cout<<i<<" ";
                n--;
            }
            i++;
        }cout<<endl;

    }
return 0;
}