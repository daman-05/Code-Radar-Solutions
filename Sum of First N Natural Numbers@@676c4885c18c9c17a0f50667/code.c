#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        b=b+i;
    }
    printf("%d",b);
    return 0;
}