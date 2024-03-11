//kiem tra so fibonacci(vong lap)

#include <stdio.h>

//void fibonacci(int n){
//	long long fn2=0,fn1=1;
//	printf("0 1 ");
//	for(int i=3;i<=n;i++){
//	long long fn=fn2+fn1;
//	printf("%lld",fn);
//	fn2=fn1;
//	fn1=fn;	
//	}
//}
//
//int main(){
//	int t=1;
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		fibonacci( n );
//	}
//}

//kiem tra so fibonacci bang mang

//void fibonacci(int n){
//	long long fibo[n];
//	fibo[0]=0;
//	fibo[1]=1;
//	for(int i=2;i<=n;i++){
//		fibo[i]=fibo[i-1]+fibo[i-2];
//	}
//	for(int i=0;i<=n;i++){
//		printf("%lld",fibo[i]);
//	}
//}
//
//int main(){
//	int t=1;
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		fibonacci(n);
//	}
//}


//void fibonacci(int n){
//	long long fn2=0,fn1=1;
//	printf("0 1");
//	for(int i=2;i<=n;i++){
//		long long fn=fn2+fn1;
//		printf("%lld",fn);
//		fn2=fn1;
//		fn1=fn;
//	}
//		
//} 
//
//int main(){
//	int t=1;
//	while(t--){
//		int n;
//		scanf("%d",&n);
//		fibonacci(n);
//	}
//}

void fibonacci(int n){
	long long fibo[n];
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=n;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(int i=0;i<=n;i++){
		printf("%lld",fibo[i]);
	}
}

int main(){
	int t=1;
	while(t--){
		int n;
		scanf("%d",&n);
		fibonacci(n);
	}
}
