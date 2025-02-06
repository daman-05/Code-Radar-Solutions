#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    printf("%d",a^(1<<b));
    return 0;
}