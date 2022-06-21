#include<iostream>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m,q;
        cin>>n>>m>>q;
        long long int arr[n]={0};    
        int check=1;
        long long int seats=0;
        while(q--)
        {
            char ch;
            long long int x;
            cin>>ch>>x;
            if(ch=='+')
            {
               arr[x-1]++;
               seats++;
               if(arr[x-1]<0)
               {
                check=0;
               }
            }
          if(seats>m)
          {
               check=0;
          }
          if(ch=='-')
          {
               arr[x-1]--;
               seats--;
               if(arr[x-1]<0)
               {
                check=0;
               }
          }
          if(seats>m)
          {
               check=0;
          }
     }
     for(int i=0;i<n;i++)
     {
          if(arr[i]<0)
          {
               check=0;
          }
     }
     if(!check)
     cout<<"Inconsistent\n";
     else
     cout<<"Consistent\n";
    }
    return 0;
}