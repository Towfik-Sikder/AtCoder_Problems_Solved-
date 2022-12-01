#include <stdio.h>
int main(){
    char s[4];
    scanf("%s", s);
    if((s[0] == s[1]) && (s[0] == s[2]) && (s[1] == s[2])){
        printf("-1\n");
    }
    else if((s[0] != s[1]) && (s[0] != s[2]) && (s[1] != s[2])){
        printf("%c", s[1]);
    }
    else if(s[0] == s[1]){
        printf("%c", s[2]);
    }
    else if(s[0] == s[2]){
        printf("%c", s[1]);
    }
    else if(s[1] == s[2]){
        printf("%c", s[0]);
    }

    return 0;
}
