#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int one=0,zero=0,check=0,n;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            if(one==zero)
            {
                check=1;
                break;
            }
        }
        if(check==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        

    }
    return 0;
}
