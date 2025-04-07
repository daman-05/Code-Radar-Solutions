#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    int temp;
    scanf("%d", &temp);
    if (temp==0 && temp<0){
        printf("Freezing");
    }else if (temp>0){
        printf("Above freezing");
    }
    return 0;
}