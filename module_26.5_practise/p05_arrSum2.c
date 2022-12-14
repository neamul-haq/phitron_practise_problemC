#include<stdio.h>

int arr_sum(int* arr, int n){
    int i,sum=0;
    for(i=0; i<n; i++){
        if(arr[i]%10==0) sum+=arr[i];
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
