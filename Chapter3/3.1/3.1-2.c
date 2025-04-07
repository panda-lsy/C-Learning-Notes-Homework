#include <stdio.h>

int factorial(int num){
    int ans=1;
    while (num!=1){
        ans*=num;
        num--;
    }
    return ans;
}

int main(){
    int inp_num;
    printf("请输入阶乘数据\n");
    scanf("%d",&inp_num);
    long int answer = factorial(inp_num);
    printf("%d的阶乘为%ld",inp_num,answer);
}