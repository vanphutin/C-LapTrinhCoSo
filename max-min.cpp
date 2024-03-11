#include <stdio.h>
#include <math.h>
//nhap 4 so, tinh max - min
int tinh(int a,int b,int c,int d);
int main(){
	int a,b,c,d,min,max;
	printf("moi nhap a b c d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int tong = tinh(a, b, c, d);
	printf("MAX-MIN= %d",tong);
}

int tinh(int a,int b,int c,int d){

	int max=a;
	int min=a;
	//tim max
	
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	if(d>max){
		max=d;
	}
	//tim min
	
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	if(d<min){
		min=d;
	}
	int tong=max-min;
	return tong; 
}
