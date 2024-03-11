#include<stdio.h>
#include<string.h>
int my_strlen(char x[]){
	int count=0;
	while(x[count]!='\0'){
		return count++;
	}	
}
void xoaxuongdong(char x[]){
	size_t len = strlen(x);
	//titv\n\0 => titv\0\0
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

int main(){
	//khai bao
//	char ten[50]="VAN PHU TIN";
	char ten[50];
	printf("nhap vao ten cua ban: ");
	fgets(ten,sizeof(ten),stdin);
	xoaxuongdong(ten);
	
	
	printf("ten cua ban la: %s",ten);
	printf("\ndo dai ten=%d ",strlen(ten));
	
	printf("\n my_strlen:");
	printf("\nten cua ban la: %s",ten);
	printf("\ndo dai ten=%d ",strlen(ten));
}
