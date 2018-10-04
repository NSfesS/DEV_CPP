#include <stdio.h>
int main()
{
    int a, n ;
    float S;
    printf("Tinh tong 1/2 + 3/4 + 5/6 + ... + 2n + 1/ 2n + 2");
    do
    {
     	printf("\nNhap n:\t");
    	scanf("%d",&n);
    	if(n < 1) printf("\nNhap n>=1. Nhap lai!");
	}
	while(n < 1);
	a = 1;
	S = 0;
	while(a <= n)
	{
		//can ep kieu du lieu (float) de chuyen cong thuc tu gia tri (int) ve (float)
		S+= float(2*a+1)/(2*a+2);
		printf("S(%d)= %.3f\n",a,S);
		a++;
	}
	printf("\n\tSn= %.3f",S);
	return 0 ;
}
