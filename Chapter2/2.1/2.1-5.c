#include "stdio.h"

int main(){
    int score,i=1,sum=0,unpass=0;
    do{
        scanf("%d",&score);
        if (score>0){
        sum+=score;
        i++;
        if (score<60){
            unpass++;
        }
    }
    }while (score>0);
    printf("学生成绩和:%d\n平均成绩:%.2f\n不及格人数:%d",sum,((float)sum)/((float)i),unpass);
}