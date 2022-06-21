#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }
        int xx = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
            {
                xx++;
                a[i]=1;
            }
        }
        
        int ans = xx;
        for (int i = 1; i < n - 1; i++)
        {
           int r=arr[i];
           
           arr[i]=arr[i-1];
           int res=0;
           if(a[i]==1)
           {
               res--;
           }
           if(i-1!=0)
           {
               if((arr[i-1]>arr[i] && arr[i-1]>arr[i-2]) || (arr[i-1]<arr[i] && arr[i-1]<arr[i-2]))
               {
                   if(a[i-1]==0)
                   {
                       res++;
                   }
               }
               else
               {
                   if(a[i-1]==1)
                   {
                       res--;
                   }
               }
           }
           if(i+1!=n-1)
           {
               if((arr[i+1]>arr[i] && arr[i+1]>arr[i+2]) || (arr[i+1]<arr[i] && arr[i+1]<arr[i+2]))
               {
                   if(a[i+1]==0)
                   {
                       res++;
                   }
               }
               else
               {
                   if(a[i+1]==1)
                   {
                       res--;
                   }
               }
           }
          
            ans=min(ans,min(xx,xx+res));
           arr[i]=arr[i+1];
           res=0;
           if(a[i]==1)
           {
               res--;
           }
           if(i-1!=0)
           {
               if((arr[i-1]>arr[i] && arr[i-1]>arr[i-2]) || (arr[i-1]<arr[i] && arr[i-1]<arr[i-2]))
               {
                   if(a[i-1]==0)
                   {
                       res++;
                   }
               }
               else
               {
                   if(a[i-1]==1)
                   {
                       res--;
                   }
               }
           }
           if(i+1!=n-1)
           {
               if((arr[i+1]>arr[i] && arr[i+1]>arr[i+2]) || (arr[i+1]<arr[i] && arr[i+1]<arr[i+2]))
               {
                   if(a[i+1]==0)
                   {
                       res++;
                   }
               }
               else
               {
                   if(a[i+1]==1)
                   {
                       res--;
                   }
               }
           }
           arr[i]=r;
           ans=min(ans,min(xx,xx+res));
        }
        cout << ans << endl;
    }
    return 0;
}