#include<stdio.h>

int main()
{
    FILE *inputFile ;
    FILE *outputFile ;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "a");

    if(inputFile==NULL)
    {
        fprintf(outputFile, "Not Found");
        return 0;
    }
    int n;
    fscanf(inputFile, "%d",&n);
    if((n%4==0) && ((n%400==0) || (n%100!=0))){
        fprintf(outputFile,"%d-->YES",n);
    }
    else fprintf(outputFile,"%d-->NO",n);
    fprintf(outputFile,"\n");
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

