/*check whether a gene is expressed or not */
#include<stdio.h>
int main()
{
    int gene;
    printf("Enter gene expression (1 for expressed, 0 for not expressed): ");
    scanf("%d",&gene);
    if(gene){
        printf("gene is expressed....\n");
        }

    else{
            printf("gene is not expressed....\n");
    }

    return 0;
}
