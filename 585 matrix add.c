#include<stdio.h>
int main() {

int a[5][5],b[5][5],sum[5][5];
int i,j;
printf("Enter the elements of matrix A\n");
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&a[i][j]);

printf("Enter the elements of matrix B\n");
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&b[i][j]);

for(i=0;i<5;i++)
for(j=0;j<5;j++)
    sum[i][j]=a[i][j]+b[i][j];

printf("The Resultant Matrix:\n");
for(i=0;i<5;i++){
for(j=0;j<5;j++){
printf("%d",sum[i][j]);}
printf("\n");}
return 0;
}


