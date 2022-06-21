#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    cin>>x>>y>>z;
    int countalice=0,countbob=0;
    if(a>x)
    {
        countalice++;
    }
    else if(x>a){
        countbob++;
    }
     if(b>y)
    {
        countalice++;
    }
    else if(y>b){
        countbob++;
    }
     if(c>z)
    {
        countalice++;
    }
    else if(z>c){
        countbob++;
    }
    
return 0;
}