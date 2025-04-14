#include "stdio.h"

int function(int i){
    return i+5;
}

int mysum(int n){
    int sum;
    while (n--){
        sum+= function(n);
    }
    return sum;
}

int main(){
    int n=0,s=0;
    scanf("%d",&n);
    s=mysum(n);
    printf("%d,%d\n",n,s);
}