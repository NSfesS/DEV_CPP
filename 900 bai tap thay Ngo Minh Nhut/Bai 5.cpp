#include <stdio.h>
int main()
{
    int a,n;
	float S;
	printf("Tinh tong 1 + 1/3 + 1/5 + ... + 1/(2n + 1)");
		do	
		{
			printf("\nNhap n:");
			scanf("%d",&n);
			if(n < 0) printf("Nhap sai. Nhap lai");
		}
		while(n<0);
		a=1;
		S=0;
		while (a <= n)
		{
			S+=1.0/(2*a+1);
			printf("S(%d)=%.3f\n",a,S);
			a++;
		}
	printf("\n\tSn= %.3f",S);
	return 0 ;
}
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.
/**********CHUC CAC BAN HOC TOT********************/

