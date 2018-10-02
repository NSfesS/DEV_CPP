#include<stdio.h>
int main()
{
	int a, n;
	a=1;
	float S;
	S = 0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1)
		{
			printf("\nPhai nhap n>1. nhap lai di!");
		}

	}
	// dung while(n<1) de tao dieu kien neu nhap n<1 thi nhap lai.
	while(n<1); 

	while(a<=n)
	{
		// phai la 1.0 / i, vi S duoc khai bao theo float-point.
		S+=1.0/a; 
		printf("\nS = %f",S);
		a++;
	}
	//%.2f la lam tron so thap phan so 2.
	printf("\nSn= %.2f: ",S);
	return 0;
}
// bai nay co nhieu cach viet khac nhau t co the viet theo cach while cung duoc.
