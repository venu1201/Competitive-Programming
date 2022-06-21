#include<bits/stdc++.h>
#define int long long int
using namespace std;
int merge(vector<int> arr, int left, int mid, int right) {
  int i = left, j = mid, k = 0;
  long long invCount = 0;
  int temp[(right - left + 1)];
 
  while ((i < mid) && (j <= right)) {
    if (arr[i] <= arr[j]) {
      temp[k] = arr[i];
      ++k;
      ++i;
    } else {
      temp[k] = arr[j];
      invCount += (mid - i);
      ++k;
      ++j;
    }
  }
 
  while (i < mid) {
    temp[k] = arr[i];
    ++k;
    ++i;
  }
 
  while (j <= right) {
    temp[k] = arr[j];
    ++k;
    ++j;
  }
 
  for (i = left, k = 0; i <= right; i++, k++) {
    arr[i] = temp[k];
  }
 
  return invCount;
}
int mergeSort(vector<int> arr, int left, int right) {
  long long invCount = 0;
 
  if (right > left) {
    int mid = (right + left) / 2;
    invCount = mergeSort(arr, left, mid);
    invCount += mergeSort(arr, mid + 1, right);
    invCount += merge(arr, left, mid + 1, right);
  }
  return invCount;
}
int get(vector<int> arr, int n) {
  return mergeSort(arr, 0, n - 1);
}
int32_t main()
{
    int n,q;
    int mod=109+7;
    cin>>n>>q;
    vector<int> arr(n),left(q),right(q);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>left[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>right[i];
    }
    int x=0;
    map<pair<int,int>,int> mp;
    while(x!=q)
    {
        int l=left[x]-1,r=right[x]-1;
        int sum=0;
        if(mp[make_pair(l,r)] != 0)
        {
            cout<<mp[make_pair(l,r)]<<endl;
            continue;
        }
        for(int i=l;i<=r;i++)
        {
            for(int j=i+1;j<=r;j++)
            {
                for(int k=j+1;k<=r;k++)
                {
                    int a=arr[i]%mod;
                    int b=arr[j]%mod;
                    int c=arr[k]%mod;
                    sum+= (((a*b)%mod)*c)%mod;
                }
            }
        }
        mp[make_pair(l,r)]=sum;
        cout<<sum<<endl;
        x++;
    }
return 0;
}