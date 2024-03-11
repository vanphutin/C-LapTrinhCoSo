//tim ucln 
#include <stdio.h>
#include <math.h>
#define ll long long 

ll ucln(ll a,ll b){
	if(b==0)
		return a;
		return ucln(b,a%b);
} 
ll bcnn(ll a,ll b){
		return a*b/ucln(a,b);
}

int main(){
	int a,b;
	printf(" moi nhap a b");
	scanf("%d%d",&a,&b);
	printf("ucln %d",ucln(a,b));
	printf("bcnn %d",bcnn(a,b));
}
