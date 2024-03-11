//SANG SO NGUYEN TO

#include<stdio.h>
#include<math.h>

int sangsnt[1000001];
void sang(){
	for(int i=0;i<=1000000;i++)
		sangsnt[i]=1;
		sangsnt[0]=sangsnt[1]=0;
		for(int i=2;i<=1000;i++){
			if(sangsnt[i]){
				for(int j=i*i;j<=1000000;j+=i){
					sangsnt[j]=0;
				}
			}
		}
	}

int main(){
	sang();
	int i,n;
	printf("moi nhap n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(sangsnt[1]){
			printf("%d\t",1);
		}
	}
}	
	
	

