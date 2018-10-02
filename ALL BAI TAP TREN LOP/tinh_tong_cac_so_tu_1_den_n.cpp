#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    printf("*--------------- WELCOME TO GITHUB ---------------*");
    printf("\n*------------------ PHONG PHAM ----------------*");
    printf("\nLien he:phongpham663@gmail.com");
    int a,i ;
    int sum = 0;
    printf("\nTinh tong cac so tu 1 den n\nNhap n: ");
    scanf("%d",&a);
    	if (a<0)
		{
    	 printf("ban nhap sai");
		 return 0;	
		}
		// for(khai bao bien,dieu kien,thay doi gia tri)
			for (i=1 ;i<= a;i++)
			{
				sum+=i;
				printf("%d\n",sum);
			}
		printf("Tong 1 den n:%d",sum);
			
	return 0 ;
}
