#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    float f;
    scanf("%f", &f);
    printf("You entered: %f", f);
    return 0;
}

int main() {
    float f;
    scanf("%f",&f);
    printf("You entered: %.2f",f);
    return 0;
}
