#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float x;
int n;
void notifications();
void input_x_n(float *x,int *n);
float tong(float x, int n);
//BEGIN
int main()
{
	int flag = 1;
	do
	{
		notifications();
		input_x_n(&x, &n);
		float S = tong(x, n);
		printf("\n\t\t===>>>>Sn = %.3f\n", S);
		printf("\n Nhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
//In ra thong bao 
void notifications()
{
	system("color 03");
	printf("\t\t\t\t\tTINH S(n) = x + x^2/2! + x^3/3! + ... + x^n/N!");
}
//Input Data
void input_x_n(float *x, int*n)
{
	printf("\n\t**Input x:\a");
	scanf("%f", &*x);
	do
	{
		printf("\n\t**Input n:\a");
		scanf("%d", &*n);
		if (*n <= 0)	printf("\n>>>Phai nhap n>0.Nhap lai!<<<<");
	} while (*n <= 0);
}
//Tinh Toan
float tong(float x, int n)
{
	float Z = 0;
	int T = 1, i;
	for (i = 1; i <= n; i++)
	{
		T *= i;
		Z += pow(double(x), double(float(i) / T));
		printf("\n\t=>> S(%d) = %.2f", i, Z);
	}
	return Z;
}
