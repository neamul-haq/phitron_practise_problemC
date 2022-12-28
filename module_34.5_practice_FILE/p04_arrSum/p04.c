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
    int n,sum=0;
    fscanf(inputFile, "%d",&n);
    while(n--)
    {
        int val;
        fscanf(inputFile, "%d",&val);
        sum+=(val%10);
    }
    fprintf(outputFile,"sum = %d",sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

