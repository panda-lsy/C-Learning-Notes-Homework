#include "stdio.h"

int main(){
    int n;
    scanf("%d",&n);  // 读取数组的大小
    int a[n];        // 声明一个大小为n的数组
    
    // 读取n个整数到数组中
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    // 使用选择排序算法对数组进行排序
    for (int i=0;i<n-1;i++){
        int min_index=i;  // 假设当前位置i是最小值的索引
        
        // 在剩余未排序的元素中寻找最小值
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min_index]){
                min_index=j;  // 更新最小值的索引
            }
        }
        
        // 交换当前位置i与最小值位置min_index的元素
        int temp;
        temp=a[min_index];
        a[min_index]=a[i];
        a[i]=temp;
    }
    
    // 打印排序后的数组
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;  // 程序正常结束
}