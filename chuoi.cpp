#include<stdio.h>

int main(){
	char ten[50];
	printf("nhap vao ten cua ban: ");
	fgets(ten,sizeof(ten),stdin);
	printf("\nten da nhap la: ");
	puts(ten);
}
