#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, i, x;
    scanf("%d", &a);
    for (i=0;;i++){
        x = a & (1<<i);
        if(x==0){
            printf("%d\n", i-1);
            break;
        }
    }
    return 0;
}