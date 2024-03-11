#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i,x,y,a,b,sum=0;
int tinhtong(int n){
	for (i=1;i<=n;i++)
		sum+=i;
	return sum;
}
int main(int argc, char *argv[]) {
 x=10;
	printf("tong la: %d",tinhtong( x));
	return 0;
}
