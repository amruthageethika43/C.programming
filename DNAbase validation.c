/* DNA base validation
input:base
output :"valid" or "invalid"
process: check base if any of these value ->'A','T','G','C' */
#include<stdio.h>
int main()
{
    char base;
    printf("Enter the DNAbase :");
    scanf("%c",&base);
    if(base=='A'||base=='T'||base=='G'||base=='C')
        printf("valid Base....");
    else
        printf("Invalid base....");
    return 0;

}
