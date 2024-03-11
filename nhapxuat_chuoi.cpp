#include <stdio.h>
#include <string.h>

void nhapxuatS1(char* S1);
void nhapxuatS2(char* S2);
void dodaichuoi(char *S1,char S2);
int main (){
	char s1[100];
	char s2[100];
	nhapxuatS1(s1);	
	nhapxuatS2(s2);
	strcat(s1,s2);
}

void nhapxuatS1(char* S1){
	printf("moi nhap chuoi S1: ");
	gets(S1);
	printf("chuoi S1 vua nhap la: ");
	puts(S1);
//	dodaichuoi(S1);
}

void nhapxuatS2(char* S2){
	printf("moi nhap chuoi S2: ");
	gets(S2);
	printf("chuoi S2 vua nhap la: ");
	puts(S2);
//	dodaichuoi(S2);
}


//void dodaichuoi(char *S1){
//	printf("do dai chuoi s1 la: %d",strlen(S1));
//}

void noichuoi(char S[]){
	
}

