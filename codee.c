#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=1,res=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-999999)
        {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-999999;
              
                count++;
            }
        }
        }
        if(res<count)
        {
            res=count;
        }
        count=1;
    }
    printf("%d",res);
    return 0;
}