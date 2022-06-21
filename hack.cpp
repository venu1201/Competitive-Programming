#include<bits/stdc++.h>
#define int long long int
using namespace std;
int merge(vector<int> arr, int temp[], int left, int mid, int right) {
   int i, j, k;
   int count = 0;
   i = left; //i to locate first array location
   j = mid; //i to locate second array location
   k = left; //i to locate merged array location
   while ((i <= mid - 1) && (j <= right)) {
      if (arr[i] <= arr[j]){ //when left item is less than right item
      temp[k++] = arr[i++];
      } else {
         temp[k++] = arr[j++];
         count += (mid - i); //find how many convertion is performed
      }
   }
   while (i <= mid - 1) //if first list has remaining item, add them in the list
      temp[k++] = arr[i++];
   while (j <= right) //if second list has remaining item, add them in the list
      temp[k++] = arr[j++];
   for (i=left; i <= right; i++)
      arr[i] = temp[i]; //store temp Array to main array
   return count;
}
int mergeSort(vector<int> arr, int temp[], int left, int right){
   int mid, count = 0;
   if (right > left) {
      mid = (right + left)/2; //find mid index of the array
      count = mergeSort(arr, temp, left, mid); //merge sort left sub array
      count += mergeSort(arr, temp, mid+1, right); //merge sort right sub array
      count += merge(arr, temp, left, mid+1, right); //merge two sub arrays
   }
   return count;
}
int get(vector<int> arr, int n) {
   int temp[n];
   return mergeSort(arr, temp, 0, n - 1);
}
int32_t main()
{
    int n,t;
    cin>>n>>t;
    vector<int> arr(n),v(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        arr[i]+=v[i]*t;
        mp[i]=
    }

    for(auto it:arr)
    {
        cout<<it<<" ";
    }cout<<endl;
    cout<<get(arr,n)<<endl;

return 0;
}