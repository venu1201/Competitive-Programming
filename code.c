#include<stdio.h>
int main()
{
     int n,x;
    
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&x);
    int d=a[x-1];
    
    for(int i=x-1;i<n && i!=n-1;i++)
    {
        
        a[i]=a[i+1];
    }
    printf(" The element deleted is:%d\nThe contents of an array after deletion are:\n ",d);
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}