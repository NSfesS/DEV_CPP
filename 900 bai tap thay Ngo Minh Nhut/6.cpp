#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 02 ");
	int a, n;
	float S;
	printf("Tinh tong 1/2 + 2/3 + 3/4 + .... + n / n + 1");
	do
	{
	 	printf("\nNhap n:");
	 	scanf("%d",&n);
	 	if(n < 1) printf("Nhap n>=1. Nhap lai");
	}
		while (n < 1);
		a = 1;
		S = 0;
		while(a <= n)
		{
			printf("S(%d)= %.3f\n",a,S+=a/(a+1));
			a++;
		}
	printf("\n\t=>Sn= %.3f",S);
	return 0 ;
}
