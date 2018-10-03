#include<stdio.h>
int main()
{
	int a, n;
	float S;
	printf("Tinh tong 1/2 + 1/4 + ... + 1/2n")
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
		S+= 1.0 / (2*a);
		printf("S(%d)= %.3f\n",a,S);
		a++;
	}
	printf("\n\tSn= %.3f",S);
	return 0;
}
// bai nay co nhieu cach viet khac nhau ta co the viet theo cach (while) cung duoc^^.
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.
