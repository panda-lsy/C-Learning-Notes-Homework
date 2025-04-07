#include <stdio.h>
int gcd(int a,int b){
    int temp;
    if (a<b){
        temp=a;
        a=b;
        b=temp;
    }
    while (b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int num1,num2;
    printf("请输入两个整数:");
    scanf("%d %d",&num1,&num2);
    int result = gcd(num1,num2);
    printf("最大公约数为:%d\n",result);
    return 0;
}