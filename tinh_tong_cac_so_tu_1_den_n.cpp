#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 02 ");
    int a,i ;
    int sum = 0;
    printf("Tinh tong cac so tu 1 den n\nNhap n: ");
    scanf("%d",&a);
    	if (a<0)
		{
    	 printf("ban nhap sai");
		 return 0;	
		}
			for (i=1 ;i<= a;i++)
			{
				sum+=i;
				printf("%d\n",sum);
			}
		printf("Tong 1 den n:%d",sum);
			
	return 0 ;
}
