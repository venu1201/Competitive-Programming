#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin >> n;

       string s;
       cin >> s;

       bool flag = true;

       long long int cnt0 = 0, cnt1 = 0;
       for(auto x: s){
           if(x == '0'){
               cnt0++;
           }else{
               cnt1++;
           }
       }

       if (min(cnt0, cnt1) == 0) {
           flag = false;
       }
       
       if (min(cnt0, cnt1) >= 2) {
           long long int move = cnt0 + cnt1 - (2LL * min(cnt0, cnt1));
           if (move % 2 == 0) {
               flag = false;
           }
       }

       if(flag){
           cout << "Alice" << endl;
       }else{
           cout << "Bob" << endl;
       }
    }
return 0;
}