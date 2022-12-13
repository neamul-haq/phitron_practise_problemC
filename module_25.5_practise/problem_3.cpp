#include<bits/stdc++.h>
bool cost(char s[]){
    int len=strlen(s);
    int i,cnt=0;
    for(i=0; i<len; i++){
        cnt+=s[i];
    }
    cnt = cnt - 96*len;
    float a;
    a = log2(cnt);
    if(a-int(a)==0) return true;
    return false;
}
int main(){
    char s[100];
    scanf("%s",s);
    if(cost(s)) printf("YES");
    else printf("NO");
}

