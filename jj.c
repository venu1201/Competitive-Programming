#include<stdio.h>
#include<string.h>
void voweltoZ(char *str)            /* This function takes string str as pointer that means any change of string str in the function 
                                        will change the original string .*/
{
    char ch='z';                    // declaring a char as assign as z because we need to change the vowel to 'z' character.
    for(int i=0;i<strlen(str);i++)  // running a loop to traverse the whole string and checking that if we get vowel character we change it to z character
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')  //condition for checking the character is vowel or not
        {
            str[i]=ch;              // if the character is vowel then str[i]=ch will change the character to z .str is a pointer so there will be change in original string as well

        }
    }
    // all the vowel characters are changed to z .since str is a pointer so original str in main function will also be changed
    
}
int main()
{
    char str[10];                       // declaring string with size 10 we can assume any size 
    printf("enter any string\n");
    gets(str);                          // takes input of string from user
    printf("string before replacing vowels to z : %s\n",str);

    voweltoZ(str);                      // function call passes the string str as pointer
    printf("string after replacing vowels to z : %s",str);   // we can see the original str is changed here using pointers
    return 0;
}