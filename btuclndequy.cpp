#include <stdio.h>
#include <string.h>

void nhapxuat(char *s1);
void canbang2chuoi(char *s1, char *s2);
void tong(char *s1, char *s2);
int main(){
	char s1[100];
	char s2[100];
	nhapxuat(s1);
	nhapxuat(s2);
	canbang2chuoi(s1,s2);
	tong(s1,s2);
}

void nhapxuat(char *s1){
	printf("nhap chuoi so : ");
	gets(s1);
	printf("xuat chuoi so : ");
	puts(s1);
}
void canbang2chuoi(char *s1, char *s2){
	int a = strlen(s1);
	int b = strlen(s2);
	if(a > b){	
		for(int i = 0; i < a-b; i++){
			for(int j = a-b+i; j >= 0; j--){
				s2[j+1] = s2[j];
			}
			s2[i] = '0';
		}
		s2[a] ='\0';
	}else{
		for(int i = 0; i < b-a; i++){
			for(int j = b-a+i; j >= 0; j--){
				s1[j+1] = s1[j];
			}
			s1[i] = '0';
		}
		s1[b] ='\0';
	}
}

void tong(char *s1, char *s2){
	int sum,i;
	int phannho = 0;
	char a[strlen(s1)];
	int len = strlen(s1);
	for(i = len-1; i >= 0; i--){
		sum = (s1[i] - '0') + (s2[i] - '0') + phannho; 
		a[len-i-1] = (sum%10) + '0';
		phannho = sum / 10;
	}
	if(phannho != 0 ){
		a[len] = '1';
		a[len+1] = '\0';
	}else{
		a[len] = '\0';
	}
	
	for(int i = len; i >= 0; i--){
		printf("%c", a[i]);
	}
}
