#include <stdlib.h>

#include <string.h>

#include <stdio.h>
typedef struct
{
    int n;
    char *str_array[100];
} menu;

int main(void)

{
    menu flowers;
    int i;

    printf("Please type the number of collections you have : \n");
    scanf("%d", &flowers.n);
    char array_i[100];
    printf("Enter the  strings:\n");

    for (i = 0; i < flowers.n; i++)

    {

        scanf("%s", array_i);
        flowers.str_array[i]=(char *)malloc(strlen(array_i) * sizeof(char));
        strcpy(flowers.str_array[i], array_i);
    }

    printf("Your collection were:  \n");

    for (i = 0; i < flowers.n; i++)
    {

        printf("%s\n", flowers.str_array[i]);
    }

    return 0;
}