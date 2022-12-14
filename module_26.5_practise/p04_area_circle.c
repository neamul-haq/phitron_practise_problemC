#include<stdio.h>

float area(int rad){
    return 3.1416*rad*rad;
}
int main(){
    int r;
    scanf("%d",&r);
    printf("%f",area(r));
}
