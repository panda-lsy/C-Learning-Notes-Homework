#include <stdio.h>

int main(){
    int x,n;
    scanf("%d %d\n",&n,&x);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    int count=0;
    for (int i=0;i<n;i++){
        if (a[i]==x){
            printf("%d\n",i);
            count+=1;
        }
    }
    if (count==0){
        printf("Not Found\n");
    }
}