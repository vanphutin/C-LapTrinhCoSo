// so tu [a.b] % 3 and 5

#include <stdio.h>
void kiemtra(int a,int b);

int main (){
	int a,b;
	printf("nhap a b: ");
	scanf("%d%d",&a,&b);
	kiemtra(a,b);
}

void kiemtra(int a,int b){
	int dem=0;
	for(int i=a;i<=b;i++){
		if(i%3==0&&i%5==0){
			printf("%d",i);
			dem++;
		}
	} if(dem == 0){
        printf("Khong co so nao thoa man yeu cau!");
}
}
