#include "stdio.h"

int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for (int i;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    int min_index=0;
    for (int i=1;i<n;i++){
        if (a[min_index]>a[i]){
            a[min_index]=a[i];
            min_index=i;
        }
    }
    printf("%d %d",a[min_index],min_index);
}