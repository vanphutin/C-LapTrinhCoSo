#include <stdio.h>
int main(){
	int a[]={3,5,6,7,5,4,6,6};
	for(int i=0;i<8;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	int *p=a;
	for(int i=0;i<8;i++){
		printf("",(p+i));
	}
}
