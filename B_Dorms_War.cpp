#include<iostream>
using namespace std;
void fun1(int&,int);
void fun2(int,int&);
int d=14;
int main()
{
	int a=11,b=12,c=13;								
	fun1(c,b);
	cout<<a++<<","<<b++<<","<<--c<<endl;
	fun2(c,b);
	cout<<a<<","<<b<<","<<++c<<endl;
	cout<<--d<<endl;
	system("pause");
	return 0;
return 0;
}
void fun1(int& x,int y)
{
	while (x>0)
	{
		static int z=0;
		z+=x%10;
		
		y+=1;
		x=x/10;
		if(x>0)
		{
			continue;
		}
		cout<<x<<","<<y<<","<<z<<endl;
		d+=z;
	}
	
}
void fun2(int x,int&y)
{
	++x;
	y--;
	d--;
}