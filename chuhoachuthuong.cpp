#include<stdio.h>
#include<string.h>
void nhapxuat(char a[]);
void inhoa(char a[]);
void vietthuong(char a[]);
void VietHoa(char a[]);
int main(){
	char a[100];
	nhapxuat(a);
	inhoa(a);
	vietthuong(a);
	VietHoa(a);
	printf("%s",a);
}

void nhapxuat(char a[]){
	printf("moi nhap vao chuoi: ");
	gets(a);
	printf("chuoi vua nhap la: ");
	puts(a);
}

void inhoa(char a[]){
	strupr(a);
	printf("chuyen sang viet hoa: %s",a);
}
void vietthuong(char a[]){
	strlwr(a);
	printf("\nchuyen sang thuong: %s",a);
}

void VietHoa(char a[]){
	printf("\nchu sau khi viet hoa: ");
	for(int i=0;i<strlen(a);i++){
		if(i==0 || (a[i-1]==32)){
			if(a[i]>=97 && a[i]<=122)
			a[i]=a[i]-32;
		} else
		if(a[i]>65 && a[i]<=90)
			a[i]=a[i]+32; 
	}
	 
}

//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//
//void nhapxuat(char s[]);
//void doichuoi(char s[]);
//
//int main(){
//	char s[100];
//	nhapxuat(s);
//	doichuoi(s);
//	puts(s);
//}
//
//void nhapxuat(char s[]){
//	printf("nhap chuoi: ");
//	gets(s);
//	printf("chuoi vua nhap: ");
//	puts(s);
//}
//
//void doichuoi(char s[]){
//	s[0] = toupper(s[0]);
//	for(int i = 1; i < strlen(s); i++){
//		if(s[i] == ' '){
//			s[i+1] = toupper(s[i+1]);
//		}else{
//			s[i+1] = tolower(s[i+1]);
//		}
//	}
//}

