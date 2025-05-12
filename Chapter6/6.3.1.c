#include <stdio.h>
int main(){
	char *p="First";
	puts(p);
	p="Second";
	for (;*p!='\0';p++){
		putchar(*p);
	}
	printf("\n");
}
