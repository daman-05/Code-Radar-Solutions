#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    while(n>>1){
        n= n>>1;
    }
    if(n==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    printf("%d", n);
    return 0;
}