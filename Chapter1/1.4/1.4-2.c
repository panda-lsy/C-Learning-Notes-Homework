#include <stdio.h>
int main(){
    int x=0,y=0;
    scanf("%d",x);
    if (x<=0){
        y=x+1;
    }
    if (0<x<=3){
        y=1;
    }
    if (x>3){
        y=x;
    }
    printf("y=%d",y);
}