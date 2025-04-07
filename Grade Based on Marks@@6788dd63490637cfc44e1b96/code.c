#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    (a>=90)? printf("A") : (80<=a && a<90)? printf("B") : (70<=a && a<80)? printf("C") : (60<=a && a<70)? printf("D") : printf("F");
    return 0;
}