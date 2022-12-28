#include<stdio.h>

int find_7(int n)
{
	while(n>0){
        if(n%10==7) return 1;
        n/=10;
	}
	return 0;
}


int cnt_7(int* ar,int n){
    int i, cnt=0;
    for(i=0; i<n; i++){
        if(find_7(*(ar+i))) cnt++;
    }
    return cnt;
}


int main(){
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d",ar+i);
    }
    int cnt = cnt_7(ar,n);
    if(n%2==0) {
        if(cnt>=n/2) printf("Beautiful");
        else printf("Ugly");
    }
    else{
        if(cnt>=(n/2)+1) printf("Beautiful");
        else printf("Ugly");
    }
}
