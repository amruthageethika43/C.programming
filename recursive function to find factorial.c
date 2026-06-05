/*recursive function to find the factorial of a given non negative integer*/
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n ==  1)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{

int num,result;
printf("Enter a non negative number:");
scanf("%d",&num);

if (num<0)

{
    printf("Factorial is not defined for negative numbers.\n");
}
else
   {
       result= factorial(num);
       printf("Factorial of %d = %d\n",num,result);
   }
   return 0;

}
