#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	//kiem tra tam gia va tinh chu vi & dien tich
	float a,b,c,CV,DT,NCV;
	printf("moi nhap vao 3 canh tam giac: ");
	scanf("%f%f%f", &a, &b, &c);
	if (a+b>c && a+c>b && b+c>a){
		printf("ba canh ban nhap la tam giac !");
	CV=a+b+c;
	NCV=(a+b+c)/2;
	DT=(sqrt(NCV) * (NCV-a) * (NCV-b) * (NCV-c));
	printf("\nchu vi la: %f", CV);
	printf("\ndien tich la: %f ", DT);
	}
	else 
		{
			printf("ba canh nay khong phai tam giac !");
		}
		
	return 0;
}
