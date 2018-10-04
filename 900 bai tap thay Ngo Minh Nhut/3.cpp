#include<stdio.h>
int main()
{
	int a, n;
	float S;
	printf("Tinh tong 1/2 + 1/4 + ... + 1/2n");
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1) printf("\nNhap n>=1. nhap lai!");

	}
	while(n < 1); 
	S = 0;
	a = 1;
	while(a <= n)
	{
		//ep (float) de chuyen phep tinh (int) sang (float)
		S+= float(1) / (2*a);
		printf("S(%d)= %.3f\n",a,S);
		a++;
	}
	printf("\n\tSn= %.3f",S);
	return 0;
}
