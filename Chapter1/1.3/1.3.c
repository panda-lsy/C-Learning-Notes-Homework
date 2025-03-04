#include <stdio.h>

int main(){
    char name[10];int age;float grade;char level;
    int i=0;char ch;
    printf("请输入姓名(无空格):");
    while((ch=getchar())!='\n'){
        name[i]=ch;
        i++;
    }
    printf("请输入年龄:");
    scanf("%d",&age);
    printf("请输入成绩(0~100):");
    scanf("%f",&grade);
    printf("请输入等级(A/B/C/D):");
    scanf("   %c",&level);

    printf("----- 学生信息 -----\n");
    printf("姓名: %s\n",name);
    printf("年龄: %d 岁\n",age);
    if (grade>100 || grade<0){
        printf("成绩: 不合法数据\n");
    }
    else{
        printf("成绩: %.1f\n",grade);
    }
    if (level == 'A' || level == 'B' || level == 'C' || level == 'D'){
        printf("等级: %c\n",level);
    }
    else{
        printf("等级: 不合法数据\n");
    }
}