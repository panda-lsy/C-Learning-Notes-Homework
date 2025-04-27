#include "stdio.h"

int main(){
    char a[10]="",b[10]="";
    gets(a);
    scanf("%s",b);//注意，这里没有使用&取起始地址
    puts(a);
    printf("%s\n",b);
}