#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool cost(char s[]){
    int len=strlen(s);
    int i,cnt=0;
    for(i=0; i<len; i++){
        cnt+=s[i];
    }
    cnt = cnt - 96*len;
    int a = log2(cnt);
    if(cnt==pow(2,a)) return true;
    else return false;
}
int main(){
    char s[100];
    scanf("%s",s);
    if(cost(s)) printf("YES");
    else printf("NO");
}
