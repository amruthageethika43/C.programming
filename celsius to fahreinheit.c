/*to convert celsius to fahrenheit
input: celsius
output: fahrenheit
process: cesius to fahrenheit
formula: F=(c*9/5)+32 */
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in fahrenheit is %.2f",fahrenheit);
    return 0;

}

