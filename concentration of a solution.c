/*To find concentrarion of a solution*/
#include<stdio.h>
int main()
{
int n,i;
float m,v,C;
printf("Enter number of samples:\n");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
    printf("\n Sample %d\n",i);
     printf("Enter mass(m):");
     scanf("%f",&m);

     printf("Enter volume(v):");
     scanf("%f",&v);
     if (v==0)
     {
         printf("Error: Volume cannot be Zero\n");
         }
         else
          {
            C=m/v;
         printf("Concentration=%.2f\n",C);
          }

}
return 0;
}

