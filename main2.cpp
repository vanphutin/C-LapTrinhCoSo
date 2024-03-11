#include <stdio.h>
#include <math.h>

bool insonguyento(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<(n-1);i++){
	if(n%i==0){
	return false;
		}
	}
	return true;
}

int main() {
	int n;
	printf("moi nhap so: ");
	scanf("%d",&n);
	if(insonguyento(n)){
		printf("la so nguyen to");
	}
	else
		 printf("khong la so nguyen to");
}
