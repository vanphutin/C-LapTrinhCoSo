//tinh tong tu 1+2+3+...+n
#include <stdio.h>
//int main(){
//	int n,i;
//	int s=0;
//	printf("moi nhap vao n: ");
//	scanf("%d",&n);
//	for(i=0;i<=n;i++){
//		
//		s+=i;
//	}
//	printf("tong la: %d",s);
//}\


//ham

int tong(int n){\
	int tong=0;
	for(int i=0;i<=n;i++){
	tong+=i;	
	}
	return tong;
}

int main(){
	int n;
	do
	{
		printf("moi nhap vao n: ");
		scanf("%d",&n);
	}
	
	while(n<=0);
		printf("tong la: %d",tong(n));
	
}
