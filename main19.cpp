#include <stdio.h>
//
//int main (){
//	
//	int ng,th,na;
//	int flag1=0;
//	printf("moi ban nhap nhap vao ngay: ");
//	scanf("%d",&ng);
//	printf("moi ban nhap vao thang: ");
//	scanf("%d",&th);
//	printf("moi ban nhap vao nam: ");
//	scanf("%d",&na);
//	switch(th){
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 12: if(ng<=31) flag1=1; break;
//		case 4:
//		case 6:
//		case 9:
//		case 11: if(ng<=30) flag1=1; break;
//		case 2: 
//			if((na%4==0) && (na%100!=0) || (na%400==0) &&(ng<=29));
//			if(ng<=29) flag1=1; break;
//		default: printf("ban nhap sai!!");
//	}
//	if(flag1==1)
//	{
//		printf("ngay nay hop le\n");
//		if((na%4==0) && (na%100!=0) || (na%400==0))
//			printf("nam nhuan");
//	 else 
//			printf("nam khong nhuan");
//	}
//	else {
//		printf("khong hop le\n");
//	}
//}


int main(){
	int ng,th,na;
	int fail=1;
	printf("moi nhap ngay thang nam: ");
	scanf("%d%d%d",&ng,&th,&na);
	switch(th){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if(ng>=31) fail==1; break;
		case 4:
		case 6:
		case 9:
		case 11: if(ng>=30) fail==1; break;
		case 2:
			if((na%4==0) && (na%100!=0)|| (na>=29) &&(na%400==0))
			if(ng<=29) fail=1; break;
			default: printf("ban nhap sai");
if(fail==1)
	{
		printf("ngay nay hop le\n");
		if((na%4==0) && (na%100!=0) || (na%400==0))
			printf("nam nhuan");
	 else 
			printf("nam khong nhuan");
	}
	else {
		printf("khong hop le\n");
	}
}
}
