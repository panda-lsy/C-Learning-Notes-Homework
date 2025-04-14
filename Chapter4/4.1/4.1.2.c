#include "stdio.h"

int function(int n){
    static int s=1;
    if (n > 0){
        s *= n;
        return function(n-1);
    }
    else{
        return s;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",function(n));
}