#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
        
	    long long int min=9999999999999;
        
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]-a[i-1]<min)
	        {
	            min=a[i]-a[i-1];
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}