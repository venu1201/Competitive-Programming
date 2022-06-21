#include<stdio.h>
/*Five simple binary arithmetic operators
▪ + “plus” -> c = a + b
▪ - “minus” -> c = a - b
▪ * “times” -> c = a * b
▪ / “divided by” -> c = a/b
▪ % “modulus” -> c = a % b
Q.1 What are the values of c in each case above if
1. int a = 10, b = 2;
ans)    + plus -> c = a + b = 12
        - minus -> c = a - b = 8
        * times -> c = a * b = 20
        modulus -> c = a modulo b = 0
        / divided by -> c = a / b = 5
2. float a = 10, b = 2;
ans)     + “plus” -> c = a + b = 12.000000
        - “minus” -> c = a - b = 8.000000
        * “times” -> c = a * b = 20.000000
        / “div” -> c = a / b = 5.000000
         “modulo” -> c = a modulo b = error
3. int a = 10; float b = 2; ??
ans)    + “plus” -> c = a + b = 12.000000
        - “minus” -> c = a - b = 8.000000
         * “times” -> c = a * b = 20.000000
        / “div” -> c = a / b = 5.000000
        “modulo” -> c = a modulo b = error*/
int main()
{
   
   int a,b;
   
   scanf("%d%d",&a,&b);
   printf("+ “plus” -> c = a + b = %f\n",a+b);
   printf("- “minus” -> c = a - b = %f\n",a-b);
   printf("* “times” -> c = a * b = %f\n",a*b);
   printf("/ “div” -> c = a / b = %f\n",a/b);
   printf(" “modulo” -> c = a modulo b = %f\n",a%b);

    
    return 0;

    


}

