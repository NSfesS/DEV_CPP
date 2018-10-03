#include<stdio.h>
int main()
{
	int a,n;
	float S;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1) printf("\nNhap n>=1. Nhap lai!");
	}
	// dung while(n<1) de tao dieu kien neu nhap (n<1) thi nhap lai.
	while(n < 1); 
	//(1/n) ta co a!=0.
	a=1;
	S=0;
	while(a <= n)
	{
		// phai la (1.0 / i), vi S duoc khai bao theo (float-point).
		S+=1.0 / a; 
		printf("S(%d) = %f\n",a,S);
		a++;
	}
	printf("\n\t=>Sn= %.2f: ",S);
	return 0;
}
// bai nay co nhieu cach viet khac nhau ta co the viet theo cach (while) cung duoc^^.
// chu code khoang trang ro rang, thut ra thut vao hop ly nhe^^.
