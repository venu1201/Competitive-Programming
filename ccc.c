#include<stdio.h>
void function(int arr[])
{
    int n=sizeof(arr);
    for(int i=2;i<n;i+=2)
    {
        if(i==2)
        {
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
        else
        {
            int temp=arr[i-2];
            arr[i-2]=arr[i];
            arr[i]=temp;
            temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d ",arr[i]);
    }
    return;
}
int main()
{
    int arr[8];
    for(int i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);
    }
    function(arr);
    return 0;
}