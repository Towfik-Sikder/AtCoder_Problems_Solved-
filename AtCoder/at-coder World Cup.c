#include <stdio.h>
int main(){
    int y;
    scanf("%d", &y);
    int x = y % 4;
    if(x == 2){
        printf("%d\n", y);
    }
    else if(x == 0){
        printf("%d\n", y + 2);
    }
    else{
        printf("%d\n", y + x);
    }


    return 0;
}
