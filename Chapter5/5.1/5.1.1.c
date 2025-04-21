int main(void){
	int i;double average,sum,n=10;
	int a[10];	//定义1个有10个整型元素的数组a
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	sum = 0;
	for (i=0;i<10;i++){
		sum+= sum+ a[i];
	}
	average = sum/n;
	printf("average=%.2f\n",average);
    for (i=0;i<10;i++){
		if (a[i]>average){
            printf("%d",a[i]);
        }
	}
    printf("\n");
    return 0;
}
