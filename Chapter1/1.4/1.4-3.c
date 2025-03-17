#include <stdio.h>
#include <stdlib.h>
int main(void){
    int my_num = rand() % 100;  //控制随机数范围(0-99),对生成的0-32767取后两位
    int your_num;

    printf("输入你的数字:");
    scanf("%d",&your_num);
    if (my_num==your_num){
        printf("相等");
    }
    else{
        printf("不相等,%d != %d",your_num,my_num);
    }
    return 0;
}