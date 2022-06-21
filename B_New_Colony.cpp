#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
     long long int n,k;
     cin>>n>>k;
     vector<long long int> arr(n);
     for(auto &x:arr)
     {
        cin>>x;
     }
     long long int l=0,cnt=0,ch=-1;
     while(l!=arr.size()-1)
     {
         
         
             if(arr[l]<arr[l+1])
             {
                 cnt++;
                 if(cnt==k)
                 {
                     ch=l;
                     break;
                 }
                 arr[l]++;
                 l=0;
                
                 continue;
             }
         
         
         l++;
        

     }
     if(ch!=-1 && ch+1!=arr.size())
     cout<<ch+1<<endl;
     else
     {
         cout<<-1<<endl;
     }
         
     
     
    }
return 0;
}