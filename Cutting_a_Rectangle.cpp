#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int w, h, x, y;
    cin>>w>>h>>x>>y;
    cout.precision(6);
    cout<<(double)(w * h)/(double)2<<" ";
    if (x * 2 == w && y * 2 == h)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}