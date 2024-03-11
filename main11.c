#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int s;
int tinh(float x,int n){
 s=pow(x,n);
return s;
}

int main(int argc, char *argv[]) {
float a;
int n;
printf("\n moi nhap so a: ");
scanf("%f",&a);
printf(" moi nhap so b: ");
scanf("%d",&b);
	printf("%f",tinh(a,b));
return 0;
}
