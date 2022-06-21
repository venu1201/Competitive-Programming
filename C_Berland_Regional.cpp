#include<bits/stdc++.h>
#define int long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	} 
	vector<int> b;
	vector<pair<int,int>> arr;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		b.push_back(x);
		arr.push_back(make_pair(b[i],a[i]));
	} 
	int z;
	cin>>z;
	int j=n-1;
	sort(arr.begin(),arr.end());
	int sum=0;
	while(z>0 && j>=0)
	{
		if(arr[j].second<=z)
		{
			z-=arr[j].second;
			sum+=arr[j].first*arr[j].second;
		}
		else
		{
			sum+=arr[j].first*z;
			z=0;
		}
		j--;
	}
	cout<<sum<<endl;
return 0;
}