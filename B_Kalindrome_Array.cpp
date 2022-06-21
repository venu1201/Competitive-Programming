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
        long long int n;
        cin>>n;
        
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1 || n==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        long long int l=0,r=n-1;
        long long int x=-1,y=-1,check=1;
        while(l<r)
        {
            if(arr[l]==arr[r])
            {
                l++;
                r--;
                
            }
            else
            {
                check=0;
                x=arr[l];
                y=arr[r];

                break;
            }
            
        }
        if(check==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            l=0,r=n-1,check=1;
            
            while(l<r)
            {
                if(arr[l]==x)
                {
                    l++;
                }
                else if(arr[r]==x)
                {
                    r--;
                }
                
                else if(arr[l]!=arr[r])
                {
                    check=0;
                    break;
                }
                else
                {
                l++;
                r--;
                }

            }
            if(check==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                 l=0,r=n-1,check=1;
            while(l<r)
            {
                if(arr[l]==y)
                {
                    l++;
                }
                else if(arr[r]==y)
                {
                    r--;
                }
                else if(arr[l]!=arr[r])
                {
                    check=0;
                    break;
                }
                else
                {
                l++;
                r--;
                }

            }
            if(check==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            }
        }



    }
return 0;
}