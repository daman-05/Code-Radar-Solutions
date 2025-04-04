#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    char str[100];
    int age;
    char str2[100];
    scanf("%s", &str);
    scanf("%d", &age);
    scanf("%s", &str2);
    printf("Name: %s\n", str);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", str2);
    return 0;
}