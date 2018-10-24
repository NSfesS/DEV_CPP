#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float x;
int n;
void inputDATA(float *x, int *n);
float TONG(float x, int n);
// ham nay co tac dung thong bao (2)
void notifications()
{
	system("color 03");
	printf("\t\t\t\t\TINH 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!");
}
// HAM CHINH(1)
int main()
{ 
	int flag = 1;
	do
	{
		notifications();
		inputDATA(&x, &n);
		//TONG( x, n);
		printf("\n\t=>>>[KET QUA] Sn = %.2f\n", TONG(x, n));
		printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d",&flag);
	} while (flag != 0);
	system("pause");
	return 0;
}
// INPUT(3)
void inputDATA(float *x, int *n)
{
	printf("\nInput x : \a");
	scanf("%f", &*x);
	do {
		//int *n =  &*p;
		printf("\nInput n:\a");
		scanf("%d", &*n);
		if (*n == 0)	printf("\nPhai nhap n >0. Nhap lai!");
	} while (*n == 0);
}
//	TINH TOAN(4)
float TONG(float x, int n)
{
	float S = 0;
	int i, T = 1, gt = 1;
	for (i = 1; i < n; i++)
	{
		T = 2 * i;
		printf("\n Phan tu %d = %d", i, T);
		gt *= 2 * i;
		printf("\n Phan mau(giai thua) %d = %d", i, gt);
		S += 1 + pow(double(x), double(float(T) / gt));
		printf("\n=>>S(%d) = %.3f\n", i, S);
	}
	return S;
}
