#include<stdio.h>
int less_or_greater_from_k(int ar[], int n, int k){
    int i,cnt=0;
    for(i=0; i<n; i++){
        if(ar[i]>k || ar[i]<k) cnt++;
    }
    return cnt;
}
int main(){
    int n,i,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    int ans = less_or_greater_from_k(ar, n, k);
    printf("%d",ans);
    return 0;
}
