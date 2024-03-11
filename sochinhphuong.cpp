//kiem tra so chinh phuong
#include <stdio.h>
#include<math.h>
int kt(int n){
	int can=sqrt
	(n);
	if(1ll*can*can==n)
	return 1;
	return 0;
}
int main(){
	int t;
	scanf("%d",&t);
		while(t--){
			int a,b;
			scanf("%d%d",&a,&b);
			int c1=sqrt(a),c2=sqrt(b);
			if(c1*a!=a)
				++c1;
			for(int i=c1;i<c2;i++){
				printf("%d",i*i);
			}
			printf("\n");
		}
	}

