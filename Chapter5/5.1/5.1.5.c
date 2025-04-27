#include "stdio.h"

int main(){
    int m,n,r,c,max;
    scanf("%d %d",&m,&n);
    int list[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&list[i][j]);
        }
    }
    max=list[0][0];
    r=0;
    c=0;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (list[i][j]>max){
                max=list[i][j];
                r=i;
                c=j;
            }
        }
    }
    printf("%d:%d %d",max,r,c);
}