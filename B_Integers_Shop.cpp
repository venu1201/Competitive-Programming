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
         int n, z, i ;
    cin >> n ;
    vector<vector<int>> v(n) ; 
    for(i = 0 ; i < n ; i++)
    {
        
        cin >> z ; v[i].push_back(z) ;
        cin >> z ; v[i].push_back(z) ;
        cin >> z ; v[i].push_back(z) ;
    }
  
    int mn = INT_MAX, mx = INT_MIN, mnr = INT_MAX, mxr = INT_MIN, cost = 0, costr = 0, mni = -1, mxi = -1 ;
    for(i = 0 ; i < n ; i++)
    {
        if(v[i][0] < mn && v[i][1] > mx)
        {
            costr = cost ; mnr = mn ; mxr = mx ;
            cost = v[i][2] ; mn = v[i][0] ; mx = v[i][1] ;
            mxi = i ; mni = i ;
        }
        else
        {
            if(v[i][0] < mn)
            {
                cost += v[i][2] ;
               
                mn = min(mn, v[i][0]) ;
                mni = i ; 
            }
            else if(v[i][1] > mx)
            {
                cost += v[i][2] ;
                mx = max(mx, v[i][1]) ;
               
                mxi = i ;
            }
            else
            {
                if(v[i][0] == mn && v[i][1] == mx)
                {
                    if(cost > v[i][2])
                    {
                        mni = i ; mxi = i ;
                    }
                    cost = min(cost, v[i][2]) ;
                }
                else if(v[i][1] == mx)
                {
                    if(mni != mxi)
                    {
                        if((cost - v[mxi][2] + v[i][2]) < cost)
                        {
                            cost = cost - v[mxi][2] + v[i][2] ;
                            mxi = i ;
                        }
                        
                    }
                }
                else if(v[i][0] == mn)
                {
                    
                    if(mni != mxi)
                    {
                        if((cost - v[mni][2] + v[i][2]) < cost)
                        {
                            cost = cost - v[mni][2] + v[i][2] ;
                            mni = i ;
                        }
                    }
                }
                
            }
        }
        cout << cost << "\n" ;
    }
    return 0 ;
    }
    return 0;
}