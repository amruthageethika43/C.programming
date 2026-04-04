/*To check if a student is passed in mid exam or not
input:marks
output:'passed' or 'failed'*/
#include<stdio.h>
int main()
{
int Genetics,Clang,Phy,Chem,UHVPE,LAMC;
printf("Enter student marks in Genetics\tClang\tPhy\tChem\tUHVPE\tLAMC:\n");
scanf("%d%d%d%d%d%d",&Genetics,&Clang,&Phy,&Chem,&UHVPE,&LAMC);
if (Genetics>=35&&Clang>=35&&Phy>=35&&Chem>=35&&UHVPE>=35&&LAMC>=35)
    printf("Student is Pass");
else
    printf("student is failed");
return 0;
}
