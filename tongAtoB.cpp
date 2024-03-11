//tinh tong [a,b]
#include <stdio.h>
void tinh(int a,int b);

int main(){
	int a,b;
	printf("nhap a b: ");
	scanf("%d%d",&a,&b);
	tinh(a,b);
}

void tinh(int a,int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		sum +=i;
	}
		printf("tong [%d,%d] la %d",a,b,sum);

}
