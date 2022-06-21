#include<bits/stdc++.h>
#define int long long int
using namespace std;
void permutation(string s)
{
    sort(s.begin(),s.end());
	do{
		cout << s << " ";
	}
    while(next_permutation(s.begin(),s.end())); // std::next_permutation
    
    cout << endl;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    string str="abcd";
    permutation(str);
return 0;
}