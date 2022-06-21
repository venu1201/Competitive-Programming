#include <bits/stdc++.h>
using namespace std;
int main() 
{
  
 long long int T;
  cin>>T;
  while(T--)
  {
     long long int n;
 cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
  cin >> arr[i];
    }
 int odd = 0, even = 0;
 for (int i = 0; i < n; i++) {
  if (arr[i] % 2 == 0) {
   even++;
  } else {
   odd++;
  }
 }
 if (even == 0 and odd > 0) {
  cout << -1 << endl;
  
 }
 if (odd == 0 and even > 0) {
  cout << -1 << endl;
  
 }
 if (odd > 0 and even > 0) {
  for (int i = 0; i < n; i++) {
   if (arr[i] % 2 != 0) {
    cout << arr[i] << " ";
   }
  }
  for (int i = 0; i < n; i++) {
   if (arr[i] % 2 == 0) {
    cout << arr[i] << " ";
   }
  }
  cout << endl;
 }
      
  }
  return 0;
}