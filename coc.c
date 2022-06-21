#include<stdio.h>
#include<string.h>
int it=0,inter=0;
struct st
{
    int id;
    char str[100];
    int rank;
};
struct st arr[1000];
void enter()
{
    int id,rank;
    char str[100];
    scanf("%d%s%d",&id,&str,&rank);
    arr[it].id=id;
    arr[it].rank=rank;
    strcpy(arr[it].str,str);
    it++;
    for(int i=0;i<it;i++)
    {
        for(int j=i+1;j<it;j++)
        {
            if(arr[i].rank>arr[j].rank)
            {
                int temp=arr[i].id;
                int temp1=arr[i].rank;
                char c[100];
                strcpy(c,arr[i].str);
                arr[i].id=arr[j].id;
                arr[i].rank=arr[j].rank;
                strcpy(arr[i].str,arr[j].str);
                arr[j].id=temp;
                arr[j].rank=temp1;
                strcpy(arr[j].str,c);
            }
        }       
        
    }
}
void interview()
{
    if(it<inter+1 || it==0)
    {
        printf("-1\n");
        return;
    }
    printf("%d %s\n",arr[inter].id,arr[inter].str);
        arr[inter].rank=-1;
        inter++;
}

void list()
{
    if(it<inter+1 || it==0 )
    {
        printf("-1\n");
        return;
    }
    for(int i=inter;i<it;i++)
    {
        printf("%d ",arr[i].id);
    }printf("\n");
}
int main()
{
    
    
    while(1)
    {
        char ch;
        scanf("%c",&ch);
        if(ch=='t')
        break;
        switch (ch)
        {
        case 'e':
            enter();
            break;
        case 'i':
            interview();
            break;
        case 'l':
            list();
            break;
        default:
            break;
        }
    }
    return 0;
}
