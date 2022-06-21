#include <iostream>
using namespace std;

int main() {
	long long int T;
	cin>>T;
	while(T--)
	{
	    long long int n,c;
	    cin>>n>>c;
	    long long int sum=0;
	    while(n--)
	    {
	        long long int x;
	        cin>>x;
	        sum+=x;
	    }
	    if(sum<=c)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}