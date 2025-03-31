#include "stdio.h"
#include "math.h"
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    for (A++;A<B;A++){
        int count=0;
        if (A==2|A==3){
            printf("%d",A);
        }
        for (int i=2;i<(int)(sqrt(A)+1);i++){
            if (A%i==0){
                break;
                }
        count=i;
        }
        if (count==(int)(sqrt(A))){
        printf("%d,",A);
        }
    }
}