#include <stdio.h>
#include<string.h>
int main()
{
    char dna[100];
    int i,gc=0;
    printf("Enter DNA Sequence:\n");
    scanf("%s",dna);

    for(i=0;dna[i]!='\0';i++){
        if(dna[i] == 'G'|| dna[i]=='C')
            gc++;
    }
    printf("GC count = %d\n",gc);
    printf("GC Content=%.2f%%\n",(float)gc/strlen(dna)*100);
    return 0;
}
