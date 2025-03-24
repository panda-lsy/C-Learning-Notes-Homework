#include "stdio.h"
int main(){
    int sum;
    for (int i=3;i<=100;i+=3){
        if (i%10==2){
            printf("%d ",i);
        }
    }
}