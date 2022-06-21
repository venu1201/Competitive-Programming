#include <bits/stdc++.h>
using namespace std;   
int main()
{
   int n;
   cin>>n;
   bool check = false;
  
  for(int i = 0; i < 25; i++){
    for(int j = 0; j < 15; j++){
      if((i * 4) + (j * 7) == n)
      {
        check= true;
      }
    }
  }
  
  if(check)
    cout << "Yes" << endl;
    else
    cout << "No" <<endl;
    return 0;
  
}