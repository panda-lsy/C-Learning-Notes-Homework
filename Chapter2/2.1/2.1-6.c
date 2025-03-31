#include "stdio.h"

int main(){
    int num,count=1;
    scanf("%d",&num);
    if (num<0){
        num=-num;
    }
    do{
        if (num>=10){
        num/=10;
        count++;
        }
    }while(num>=10);
    printf("%d",count);
}