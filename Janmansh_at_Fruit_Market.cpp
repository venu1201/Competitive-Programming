#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
  int n, m, x;
  cin >> n >> m >> x;

  int p = n + 1;
  int ans = 0;
  int res=1;
  if (x > m)
  {
    cout << 0 << endl;
  }
  else
  {
    while (x!=1 && p!=0)
    {
      if (ans == 0)
      {
        ans = p;
      }
      else
      {
        ans = ans * p;
      }
      p--;
      res=res*x;
      x--;
    }
    cout<<res<<endl;
    cout << ans/res << endl;
  }
  return 0;
}