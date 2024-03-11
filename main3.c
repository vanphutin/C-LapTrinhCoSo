#include<stdio.h>
#include <math.h>
#include <iostream.h>
int ucln(int s1, int s2);
int bcnn(int s1, int s2);
main()
{
int so1, so2;
    printf("Nhap so thu nhat= ");
    scanf("%d",&so1);
    printf("Nhap so thu hai= ");
    scanf("%d",&so2);
	if(so1 == 0 || so2 == 0) 
    printf("%d va %d khong co boi chung nho nhat\n",so1,so2); 
	else  
        printf("boi chung nho nhat = %d\n",bcnn(so1,so2));
    if(so1==0 && so2==0)
	   printf("%d va %d khong co uoc chung lon nhat\n ",so1,so2);
    else 
        printf("uoc chung lon nhat = %d",ucln(so1,so2));
}
int bcnn(int s1, int s2)
{  int max,i,bcnn; 
   if(s1 > s2) 
   {
        max = s1;} 
		else {
            max = s2;
        }
    i = max;     
    while(1)
        {
            if(i % s1 == 0 && i % s2 == 0)
            {
                bcnn = i;
                break;
            }
            i += max;}
    return i;     
}
int ucln(int s1, int s2) 
{ 	int a;
	if(s1==0 || s2==0 ) 
	    a=s1+s2; 
        else   {
		 ss:  if (s1==s2)
	    goto kq; 
	 else	if (s1>s2) 
        s1-=s2;  
	else s2-=s1;
	     goto ss ;	 
   kq:  a=s1; }
   return a; 
}
