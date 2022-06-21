#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int T;
	cin>>T;
	while (T--)
	{
		long long int a, b, c;
		cin>>a>>b>>c;
		long long int n = 2*abs(a - b);
		if (a>n||b>n||c>n)
        {
			cout<<"-1"<<endl;
            continue;
        }
		else
		{
			long long int ans= c;
            ans+=n/2;
			while (ans > n)
            {
                ans-= n;
            }
			cout<<ans<<endl;
		}
	}
	return 0;
}