#include "stdio.h"
int main(){
    int sum;
    for (int i=2;i<=100;i+=2){
        sum+=i;
    }
    printf("%d",sum);
}