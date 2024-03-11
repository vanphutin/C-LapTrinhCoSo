#include <stdio.h>
#include <string.h>
void nhapxuat(char a[]);
//void daonguoc(char a[]);
void my_strrev(char a[]);
int main(){
	char a[100];
	nhapxuat(a);
//	daonguoc(a);
	my_strrev(a);
	printf("\nchuoi sau khi dao nguoc la: %s",a);

}
void nhapxuat(char a[]){
	printf("moi nhap vao chuoi: ");
	gets(a);
	printf("\nchuoi vua nhap la: ");
	puts(a);
}
void my_strrev(char a[]){
	//vpt
	//tpv
	size_t len=strlen(a);
	for(int i=0;i<len/2;i++){
		char temp=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=temp;
		
	}
}



//void daonguoc(char a[]){
//	strrev(a);
//	printf("chuoi sau khi dao nguoc la: %s",a);
//}
