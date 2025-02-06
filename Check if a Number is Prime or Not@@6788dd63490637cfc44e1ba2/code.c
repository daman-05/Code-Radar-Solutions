#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int prime(int a)
    {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                return printf("Not Prime");
            }
        }
        return printf("Prime");
    }
    int a;
    scanf("%d",&a);
    prime(a);
       
    return 0;
}