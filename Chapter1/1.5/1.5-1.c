#include <stdio.h>
#define pi 3.1415926
int main(){
    int r,a,b;
    scanf("%d %d %d", &r, &a, &b);
    printf("%f\n", pi * r * r / (a + b));
}