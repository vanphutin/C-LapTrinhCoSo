#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int can,chi,a;
	printf("moi ban nhap nam: \b");
	scanf("%d",&a);
	printf("nam %d la nam \b : ",a,can+chi);
	
	
	switch(can=a%10)
		  {
		  	
   case 0:
               printf("canh ");
                break;
    case 1:
               printf("tan ");
                break;
    case 2:
              printf("nham ");
                break;
    case 3:
                printf("quy ");
                break;
    case 4:
                printf("giap ");
                break;
    case 5:
              printf("at ");
                break;
    case 6:
             printf("binh ");
                break;
    case 7:
           printf("dinh ");
                break;
    case 8:
               printf("mau ");
                break;
    case 9:
               printf("ky ");
                break;
    }
    switch(chi=a%12)
		  {
		  	
   case 0:
               printf("than");
                break;
    case 1:
               printf("dau");
                break;
    case 2:
              printf("tuat");
                break;
    case 3:
                printf("hoi");
                break;
    case 4:
                printf("ty");
                break;
    case 5:
              printf("suu");
                break;
    case 6:
             printf("dan");
                break;
    case 7:
           printf("mao");
                break;
    case 8:
               printf("thin");
                break;
    case 9:
               printf("ty");
                break;
    case 10: 
            printf("ngo");
            break;
        case 11: 
         printf("mui");
            break;
    }
    
    
}
