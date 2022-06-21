#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int c=0,o=0,d=0,e=0,h=0,f=0;
        while(n--)
        {
            string str;
            cin>>str;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]==99)
                {
                    c++;
                }
                else
                if(str[i]==100)
                {
                    d++;
                }
                else if(str[i]==101)
                {
                    e++;
                }
                else if(str[i]==102)
                {
                    f++;
                }
                else if(str[i]==111)
                {
                    o++;
                }
                else if(str[i]==104)
                {
                    h++;
                }
            }
        }
        int count=0;
        while(c>=2 && d>=1 && e>=2 && f>=1 && o>=1 && h>=1)
        {
            c-=2;
            d-=1;
            e-=2;
            f-=1;
            o-=1;
            h-=1;
            count++;

        }
        cout<<count<<endl;
    }
}