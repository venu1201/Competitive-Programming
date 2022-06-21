#include<stdio.h>
int main()
{
    int sum=0,count=0;
    for(int i=1;i<=100;i++)
    {
        if(i%6==0 && i%4!=0)
        {
            printf("%d ",i);
            count++;
            sum+=i;
        }
    }
    printf("\n");
    printf("sum of all such numbers is %d\nthe count of such numbers is %d\n",sum,count);
    return 0;
}