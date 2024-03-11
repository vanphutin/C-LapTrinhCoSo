// kiem tra so cp

#include <stdio.h>
#include <math.h>
#include <string.h>
int socp(int a);
void ghifile(char *name,int CP,int a);
int main(){
	int a;
	char name[100];
	printf(" nhap de kiem tra: ");
	scanf("%d",&a);
	int CP = socp(a);
	if(CP == 1){
		printf("%d la so chinh phuong ",a);
	}else printf("%d khong phao la so chinh phuong",a);
	FILE *f;
	printf("nhap ten file: ");
	scanf("%s",name);
	strcat(name,".txt");
	ghifile(name,CP,a);
} 

int socp(int a){
	 
	int cp = sqrt(a);
		if(cp*cp==a){
			return 1;
		}
	return 0;
}

void ghifile(char *name,int CP,int a){
	FILE *f;
	f = fopen(name,"w");
	if(f == NULL){
		printf("thao tac loi voi tep!!");

	}else{
		if(CP == 1){
		fprintf(f,"%d la so chinh phuong ",a);
	}else fprintf(f,"%d khong phao la so chinh phuong",a);
	}
	printf("tep luu thanh cong!!");
	fclose(f);
}
