#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 04");
	printf("*--------------- WELCOME TO GITHUB ---------------*");
        printf("\n*------------------ PHONG PHAM ----------------*");
	printf("\nLien he:phongpham663@gmail.com");
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
	// dung while(n<1) de tao dieu kien neu nhap n<1 thi nhap lai
	while(n < 1); 

	while(i <= n)
	{
		// phai la 1.0 / i, vi S duoc khai bao theo float-point
		S = S + 1.0 / i; 
		i++;
	}
	printf("i = %d", i);
	printf("\nS = %f", S);
	printf("\nTong 1 + 1/2 + ... + 1/%d la %.2f: ",n, S);
	return 0;
}
// bai nay co nhieu cach viet khac nhau t co the viet theo cach while cung duoc
