#include<stdio.h>
int rev_num(int n){
    if(n==0) return 0;
    printf("%d ",n);
    rev_num(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    rev_num(n);
}

