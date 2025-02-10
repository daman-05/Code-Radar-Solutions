#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,i=1;
    scanf("%d",&a);

    while(i<=a)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}