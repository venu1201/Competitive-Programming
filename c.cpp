#include<bits/stdc++.h>
using namespace std;
int count=0;
void merge(int low,int mid,int high,int arr[])
{
    vector<int> temp;
    int x=low;
    int y=mid+1;
    while(y<=high)
    {
        if(arr[x]>2*arr[y])
        {
            cout<<arr[x]<<" "<<arr[y]<<endl;
            cout<<mid<<" "<<x<<endl;
            ::count+=mid-x+1;
            
        }
        else
        {
            x++;
        }
        y++;
        
        
    }
     y=mid+1;
     x=low;
    while(x<=mid && y<=high)
    {
        if(arr[x]>=arr[y])
        {
            
            temp.push_back(arr[y]);
            y++;
        }
        else
        {
            temp.push_back(arr[x]);
            x++;
        }
    }
    while(x<=mid)
    {
        temp.push_back(arr[x]);
        x++;
    }
    while(y<=high)
    {
        temp.push_back(arr[y]);
        y++;
    }
    int xx=low;
    for(auto it:temp)
    {
        arr[xx]=it;
        xx++;
        
    }
}
void mergesort(int low,int high,int arr[])
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)>>1;
    mergesort(low,mid,arr);
    mergesort(mid+1,high,arr);
    merge(low,mid,high,arr);

}
int main()
{
 int arr[]={1,3,2,3,1};
 mergesort(0,4,arr);
 for(auto it:arr)
 {
     cout<<it<<" ";
 }cout<<endl;
 cout<<::count<<endl;
return 0;
}