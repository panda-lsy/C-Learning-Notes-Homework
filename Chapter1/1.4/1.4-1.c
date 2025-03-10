#include <stdio.h>
#include <math.h>

int main(){
    printf("======== 四则运算测试 ========\n");
    printf("1. 加法测试\n");
    printf("2. 减法测试\n");
    printf("3. 乘法测试\n");
    printf("4. 除法测试\n");
    printf("0. 退出\n");
    printf("=============================\n");
    int choice,try_count=0;
    while(choice != 1 && choice !=2 && choice!=3 && choice!=4 && choice !=0){
        if (try_count>=1){
            printf("数据不合规,请重新选择\n");
        }
        else{
            printf("请进行选择\n");
        }
        scanf("%d",&choice);
        //printf("%d",choice);
        try_count++;
    }
    if (choice==1){
        printf("请输入加数的数量\n");
        scanf("%d",&choice);
        printf("请输入N个加数,用空格分隔\n");
        
        long int nums[100],sum_num;
        for (int i=0;i<=100;i++){
            scanf("%d",&nums[100]);

        }
        
    }
    if (choice==0){
        return 0;
    }

}