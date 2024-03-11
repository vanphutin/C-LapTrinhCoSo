#include <stdio.h>
#include <math.h>
#define ll long long 
ll ucln(ll a, ll b){
//	if(a==0||b==0) return a+b;
//	while(a!=b){
//	if(a>b)
//		a=a-b;
//		else b=b-a;
//	}
//		 return a;
	if(b==0)
		return a;
		return ucln(b,a%b);
}
 ll bcnn(ll a, ll b){
 	return a/ucln(a,b)*b;
 }

int main( ){
	int a,b;
	printf("moi nhap vao a b: ");
	scanf("%d%d",&a,&b);
	printf("uoc chung lon nhat la: %d\n ",ucln(a,b));
	printf("boi chung nho nhat la: %d",bcnn(a,b));
}

