#include<stdio.h>
int main(){
    FILE *inputFile ;
    FILE *outputFile ;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if(inputFile==NULL){
        fprintf(outputFile, "Not Found");
        return 0;
    }

    while(1){
        char ch = fgetc(inputFile);
        if(ch==EOF) break;
        fputc(ch, outputFile);
    }
    return 0;
}
