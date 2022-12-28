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
    int n,i,j;
    fscanf(inputFile, "%d",&n);
    for(i=1; i<=n; i++){
        for(j=1; j<n*2-i; j++){
            if(j<=n-i) fprintf(outputFile, " ");
            else fprintf(outputFile, "#");
        }
        fprintf(outputFile, "\n");
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

