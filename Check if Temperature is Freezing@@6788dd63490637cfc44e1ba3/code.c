#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int a;
    scanf("%d", &a);
    if (a==0 && a<0){
        printf("Freezing");
    }else if (a>0){
        printf("Above freezing");
    }
    return 0;
}