#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 04");
	int i, n;
	float S;
	S = 0; i = 1;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. nhap lai di!");
		}

	}
	while(n < 1);// dung while(n<1) de tao dieu kien neu nhap n<1 thi nhap lai 

	while(i <= n)
	{
		S = S + 1.0 / i;  // phai la 1.0 / i, vi S duoc khai bao theo float-point
		i++;
	}
	printf("i = %d", i);
	printf("\nS = %f", S);
	printf("\nTong 1 + 1/2 + ... + 1/%d la %.2f: ",n, S);
	return 0;
}
// bai nay co nhieu cach viet khac nhau t co the viet theo cach while cung duoc
