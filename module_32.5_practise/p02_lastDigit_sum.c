#include<stdio.h>

int lastDgtSum(int ar[], int n){
    if(n==0) return 0;
    return (ar[n-1]%10)+lastDgtSum(ar, n-1);
}

int main(){
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    printf("%d",lastDgtSum(ar, n));
}
