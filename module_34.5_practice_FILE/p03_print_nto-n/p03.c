#include<stdio.h>

int main()
{
    FILE *inputFile ;
    FILE *outputFile ;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile==NULL)
    {
        fprintf(outputFile, "Not Found");
        return 0;
    }
    int t;
    fscanf(inputFile, "%d",&t);
    while(t--)
    {
        int n,m;
        fscanf(inputFile, "%d",&n);
        if(n>0) m=n+1;
        else m=n-1;
        while(n!=m*-1)
        {
            fprintf(outputFile, "%d ", n);
            if(m>0) n--;
            else n++;
        }
        fprintf(outputFile,"\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

