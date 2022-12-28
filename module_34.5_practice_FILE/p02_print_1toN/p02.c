#include<stdio.h>
void print1toN( );


int main(){
    FILE *inputFile ;
    FILE *outputFile ;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile==NULL){
        fprintf(outputFile, "Not Found");
        return 0;
    }
    int n;
    fscanf(inputFile, "%d",&n);

    print1toN(n, outputFile);
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}

void print1toN(int n, FILE *outputFile){
    if(n==0) return;
    print1toN(n-1, outputFile);
    fprintf(outputFile,"%d ",n);
}
