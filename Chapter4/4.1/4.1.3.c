#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void init_ui(){
    printf("======== 四则运算测试 ========\n");
    printf("1. 加法测试\n");
    printf("2. 减法测试\n");
    printf("3. 乘法测试\n");
    printf("4. 除法测试\n");
    printf("0. 退出\n");
    printf("=============================\n");
    int choice, try_count = 0;
    while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 0) {
        if (try_count >= 1) {
            printf("数据不合规,请重新选择\n");
        } else {
            printf("请进行选择\n");
        }
        scanf("%d", &choice);
        try_count++;
    }
    if (choice == 0) {
        return 0;
    } else if (choice == 1) {
       addTest();
    } else if (choice == 2) {
        printf("减法\n");
    } else if (choice == 3) {
        printf("乘法\n");
    } else if (choice == 4) {
        printf("除法\n");
    }
}

void addTest(){
    printf("现在开始加法测试\n");
    int li[8];
    li[5]=0;
    li[6]=0;
    printf("请输入测试题数\n");
    scanf("%d", &li[4]);
    srand(time(NULL));  // 随机种子，放在循环外部
    while (li[4]--) {
        li[7]++;
        printf("第%d道\n", li[7]);
        li[1] = rand() % 100;
        li[2] = rand() % 100;
        printf("%d+%d=", li[1], li[2]);
        scanf("%d", &li[3]);
        if (li[3] == li[1] + li[2]) {
            printf("\n正确\n");
            li[5] += 1;
        } else {
            printf("\n错误\n%d+%d=%d\n", li[1], li[2], li[3]);
            li[6] += 1;
        }
    }
    printf("测试结束!\n共做%d道题,做对%d道,做错%d道,最终得分为%.2f\n", 
           li[5]+li[6], li[5], li[6], li[5] * 100.0 / (li[5] + li[6]));
}

int main(){
    while (1){
        init_ui();
        return 0;
    }
}
