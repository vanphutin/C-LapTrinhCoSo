#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,n;

void chanle(a){
	if (a%2==0){
	printf("a la so chan");
}
	else {
	printf("a la so le");
	}
}

int main(int argc, char *argv[]) {
//a=5;
printf("\nmoi nhap so: ");
scanf("%d",&n);
chanle(n);
	return 0;
}
