#include <stdio.h>
int factorial(int n);
int main(void){
    int n;

    scanf("%d", &n);
    printf("%d\n", factorial(n));

    return 0;
}

int factorial(int n){
    int i,fact = 1;

    for (i=1;i<=n;i++){
        fact = fact * i;
    }

    return fact;

}