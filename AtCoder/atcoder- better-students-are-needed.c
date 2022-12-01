#include <stdio.h>
int main(){
    int n, x, y, z;
    scanf("%d %d %d %d", &n, &x, &y, &z);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    if((x + y + z) == n){
        for(int i = 1; i <= n; i++){
            printf("%d\n", i);
        }
    }
    else


    return 0;
}
