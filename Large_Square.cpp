#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,a;
        cin>>n>>a;
        cout<<floor(sqrt(n))*a<<endl;
    }
    return 0;
}