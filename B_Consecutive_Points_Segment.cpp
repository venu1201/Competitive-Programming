#include<stdio.h>
int check(char str1[], char str2[], int m, int n)
{
 
   
    if (m == 0)
        return 1;
    if (n == 0)
        return 0;
    if (str1[m - 1] == str2[n - 1])
        return check(str1, str2, m - 1, n - 1);
    return check(str1, str2, m, n - 1);
}
void fun(char str1[],char str2[])
{
    if(check(str1,str2,str1.size(),str2.size())==1)
    {
        print("yes all elements are there");
    }
    else
    {
        print("no");
    }
}
int main()
{
    char str1[],str2[];
    scanf("%s %s",str1,str2);
    fun(str1,str2)

}
