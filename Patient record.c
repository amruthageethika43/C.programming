#include<stdio.h>
struct Patientrecord{
int patientid;
char bloodgroup[5];
float temperature;
};
int main(){
struct Patientrecord p;

printf("Enter Patient  ID:");
scanf("%d",&p.patientid);

printf("Enter patient blood groop:");
scanf("%s",p.bloodgroup);

printf("Enter patient temperature:");
scanf("%f",&p.temperature);

printf("\n Patient Details\n");
printf(" ID          : %d\n",p.patientid);
printf(" Blood group : %s\n",p.bloodgroup);
printf(" Temperature : %.1f\n",p.temperature);

if(p.temperature>98.6)
    printf("Patient has fever...");
else
    printf("Patient is Normal....");

 return 0;


}
