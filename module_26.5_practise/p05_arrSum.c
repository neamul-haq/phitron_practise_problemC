#include<stdio.h>

int arr_sum(int* arr, int n){
    int i,sum=0;
    for(i=0; i<n; i++){
        int val=*(arr+i);
        if(val%10==0) sum = sum + val;
        //printf("%d ",*arr+i);
    }
    return sum;
}

int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",arr+i);
    }
    int ans = arr_sum(arr,n);
    printf("%d",ans);
}
