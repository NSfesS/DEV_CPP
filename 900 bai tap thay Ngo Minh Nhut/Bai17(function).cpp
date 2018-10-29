#include <stdio.h>
#include <math.h>

void notifications();
void input_x_n(float *x, int *n);   
float perform(float x, int n);
//BEGIN
int main()
{
	int flag = 1;
	do
	{
		float x;
		int n;
		notifications();
		input_x_n(&x, &n);
        perform(x, n);
		printf("\n Nhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
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
float perform(float x, int n)
{
	float S = 0;
	int T = 1;
	for (int i = 1; i <= n; i++)
	{
        T *= i;
		S += pow(double(x), double(float(i)))/T;
	}
    printf("\n\t[KET QUA] Sn = %f", S);
	return S;
}
