#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    for(int i = 0; i<1000; i++)
    {
        int d1=rand()%6+1;
        int d2=rand()%6+1;
        if(d1==6 && d2==6)
            cnt++;
        cout<<"("<<d1<<","<<d2<<") ";
    }cout<<endl;
    cout<<"Count of total number of box cars(two sixes) occurred: "<<cnt<<endl;
return 0;
}