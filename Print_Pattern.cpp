#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,i=0,j=0,ans=1,check=0;
        cin>>n;
        long long int a[n][n];
       
            while(check!=)
            {
                for(int i=0;j<=check;i++)
                {
                    for(j=check-i;j>=0;j--)
                    {
                        a[i][j]=ans;
                        ans++;
                        break;
                    }
                }

            }
        
    }
}