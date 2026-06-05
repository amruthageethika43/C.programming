/*to find the bacterial growth at initial and final population*/
/*formula= (final population- intial population)/Time*/
#include<stdio.h>
int main()
{
float growthrate,Final,initial,time;
printf("Enter Initial population of the bacteria :");
scanf("%f",&initial);
printf("Enter final population of the bacteria :");
scanf("%f",&Final);
printf("Enter Time period :");
scanf("%f",&time);

growthrate= (Final-initial)/time;
printf("\nThe Growth rate is %.2f units/time\n ",growthrate );
return 0;

}
