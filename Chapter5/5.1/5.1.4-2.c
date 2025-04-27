#include "stdio.h"

int main(){
    int n, temp;
    // 输入数组大小
    scanf("%d", &n);
    // 定义一个大小为n的数组
    int a[n];
    
    // 循环输入n个整数到数组
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    // 冒泡排序算法实现
    // 外层循环控制排序轮数，n个数需要n-1轮
    for (int i = 0; i < n-1; i++){
        // 内层循环进行相邻元素比较和交换
        // 每轮结束后，最大的i+1个元素已排好序，所以只需比较到n-i-1
        for (int j = 0; j < n-i-1; j++){
            // 如果前一个元素大于后一个元素，则交换它们
            if (a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    // 输出排序后的数组
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
