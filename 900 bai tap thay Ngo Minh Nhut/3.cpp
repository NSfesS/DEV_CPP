#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 02");// mau xanh la 
	int n, a;
	float S;
	printf("Tinh tong 1 + 1/2 + 1/3 + ... + 1/n");
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1) printf("\nNhap n>=1. Nhap lai!");
	}
	// dung while(n<1) de tao dieu kien neu nhap (n<1) thi nhap lai
	while(n < 1); 
	//vi (1/n) ta co a!=0
	a=1;
	S=0;
	while(a <= n)
	{
		// ep (float) vao phep tinh chuyen tu (int) sang (float)
		printf("S(%d) = %.3f\n",a,S+=float(1) / a);
		a++;
	}
	printf("\n\t=>Sn= %.3f: ",S);
	system("color 05");// mau tim 
	return 0;
}
// bai nay co nhieu cach viet khac nhau ta co the viet theo cach (while) cung duoc^^.
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.
