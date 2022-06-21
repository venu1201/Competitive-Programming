#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,x;
    cin>>n>>k;
    vector<long long int> arr;

    for(int i=0;i<n;i++)
    {
        
        cin>>x;
        arr.push_back(x);
    }
    long long int max=*max_element(arr.begin(),arr.end());
    if(k==0)
    {
       
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
     
    }
    else if(k%2==1)
    {
       
        for(int i=0;i<n;i++)
        {
        cout<<max-arr[i]<<" ";
    }
    }
    else
    {
       
        for(int j=0;j<2;j++)
        {
        for(int i=0;i<n;i++)
        {
        arr[i]=max-arr[i];
        }
        max=*max_element(arr.begin(),arr.end());
        }
         for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }

    }
    
    return 0;
}