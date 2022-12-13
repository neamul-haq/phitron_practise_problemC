#include<stdio.h>
int main(){
    int a,b,c;
    int* p;
    int* q;
    int* r;
    p=&a;
    q=&b;
    r=&c;
    scanf("%d%d%d",p,q,r);
    printf("%d\n",*p+*q+*r);
}


