/*Temperature check for bacterial growth
input:Temperature
output:'bacteria grows' or 'bacteria does not grow'
bacteri grows at a temperature 25-40*/
#include<stdio.h>
int main()
{
    float Temperature;
    printf("Enter the Temperature:");
    scanf("%f",&Temperature);
    if(Temperature >=25&&Temperature <=40)
        printf("Bacteria Grows....",Temperature);
    else
      printf("Bacteria Does not Grow....");
    return 0;
}
