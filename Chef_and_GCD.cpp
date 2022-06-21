#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int x,y;
        cin>>x>>y;
        int count=0;
        if(gcd(x,y)>1)
        cout<<count<<endl;
        else if(gcd(x+1,y)>1 || gcd(x,y+1)>1)
        cout<<count+1<<endl;
        else
        cout<<count+2<<endl;
    }
    return 0;
}