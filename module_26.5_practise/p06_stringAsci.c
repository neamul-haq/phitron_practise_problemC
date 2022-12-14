#include<stdio.h>
#include<string.h>
char make_upper(char c){
    return c-32;
}

void search_even_char(char s[]){
    int len = strlen(s);
    int i;
    for(i=0; i<len; i++){
        if(s[i]%2==0) s[i] = make_upper(s[i]);
    }
}

int main(){
    char s[1000];
    scanf("%s",s);
    search_even_char(s);
    printf("%s",s);
}
