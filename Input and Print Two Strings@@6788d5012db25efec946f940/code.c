#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    char str1[100];
    char str2[100];
    scanf("%s", &str1);
    scanf("%s", &str2);
    printf("You entered: %s", str1 & str2);
    return 0;
}