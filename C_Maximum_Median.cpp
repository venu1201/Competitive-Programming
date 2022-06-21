#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 getline(cin,str);
 string s="";
 string ans="";
 str+=' ';
 for(int i=0;i<str.size();i++)
 {
	 if(str[i]==' ')
	 {
		 if(s.size()%2==0 && s.size()>ans.size())
		 {
			 ans=s;
		 }
		 s="";
	 }
	 else
	 {
		 s+=str[i];
	 }
 }
 if(ans.size()!=0)
 	cout<<ans<<endl;
	 else
	 cout<<"00"<<endl;
return 0;
}