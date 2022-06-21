#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a;
        cin>>a;
        int sum=((a+1)*a)/2;      
        cout<<sum+a<<endl;
        

    }
    return 0;
}