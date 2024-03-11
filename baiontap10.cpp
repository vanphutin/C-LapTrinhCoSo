// ucln bcnn

#include <stdio.h>
#include <math.h>
#include <string.h>
int ucln(int a,int b);
int bcnn(int a,int b);
int ghifile(char name[100],int a,int b,int uc,int bc);
int main(){
	int a,b;
	char name[100];

	printf("nhap vao a va b: ");
	scanf("%d %d",&a,&b);
	
	int uc=ucln(a,b);
	int bc = bcnn(a,b);
	
		printf("ucln cua %d va %d la: %d",a,b,uc);
		printf("\nbcnn cua %d va %d la: %d",a,b,bc);
	
	printf("\nnhap ten file can ghi: ");
	scanf("%s",name);
	strcat(name,".txt");
		ghifile(name,a,b,uc,bc);

	
}
int ucln(int a,int b){
	if(b==0){
		return a;
	}return ucln(b,a%b);
}
int bcnn(int a,int b){
	return (a * b ) / ucln(a,b);
}
int ghifile(char name[100],int a,int b,int uc,int bc){
	FILE *f;
	f = fopen(name,"w");
	if(f == NULL){
		printf("khong the thao tac voi file !!");
		return 1;
	}

		fprintf(f,"ucln cua %d va %d la: %d",a,b,uc);
		fprintf(f,"\nbcnn cua %d va %d la: %d",a,b,bc);
	printf("tep luu thanh cong ");
	fclose(f);
}
