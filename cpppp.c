#include<stdio.h>
int hailstonenumbers(int n)
{
    static int cnt;
    printf("%d ",n);        //printing the n value
    if(n==1 && cnt==0)       // if n==1 convering to 1 and check cnt==0 so return cnt; 
    {
        return cnt;
    }
    else if(n==1 && cnt!=0)     //if n==1 covering to 1 and check cnt!=0 so return cnt n is reduced to 1
    {
        cnt++;
        return cnt;
    }
    else if(n%2==0)     // if n is even
    {
        cnt++;
        hailstonenumbers(n/2);
    }
    else if(n%2!=0){       // if n is odd
        cnt++;
        hailstonenumbers(3*n+1);
    }
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);                   //taking inputs
    int x=hailstonenumbers(n); //    function returning number of steps
    printf("\nnumber of steps: %d",x); // printing answer
    
}