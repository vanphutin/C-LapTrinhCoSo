#include <stdio.h>
#include <math.h>
//giai pt bac 2
void nhap(float *a, float *b,float *c);
void giaipt(float a,float b,float c);
int main(){
	float a,b,c;
	nhap(&a,&b,&c);
	giaipt(a,b,c);
	return 0;
}
void nhap(float *a, float *b,float *c){
	printf("nhap he so a b c : ");
	scanf("%f %f %f",a,b,c);
}
void giaipt(float a,float b,float c){
	float  delta= b*b-4*a*c;
	float x1,x2;
	if(delta>0){
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
		printf("phuong trinh co hai nghiem phan biet la x1=%f,x2=%f\n",x1,x2);
	}else if(delta==0){
		x1=x2=-b/(2*a);
		printf("phuong trinh co nghiem kep x1=x2= %f\n",x1);
	}else printf("phuong trinh vo nghiem!!\n");
	
}
