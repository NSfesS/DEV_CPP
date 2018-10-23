#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float x;
int n;
void notifications();
void input_x_n(float *x,int *n);
float tong(float *a, int*n);
//BEGIN
int main()
{
	notifications();
	input_x_n(&x,&n);
	float S = tong(&x, &n);
	printf("\n\t\t===>>>>Sn = %.3f\n", S);
	system("pause");
	return 0;
}
//In ra thong bao 
void notifications()
{
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
float tong(float *a, int *b)
{
	float Z = 0;
	int T = 1, i;
	for (i = 1; i <= *b; i++)
	{
		T *= i;
		Z += pow(double(*a), double(float(i) / T));
	}
	return Z;
}
