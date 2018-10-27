#include <stdio.h>
#include <math.h>

void notifications();
float x; 
float n;
void inputDATA(float *x, float *n);
float tinhTOAN(float x, float n);
int main()
{
	int flag = 1;
	do
	{
		notifications();
		inputDATA(&x, &n);
		printf("\n*******[KET QUA] Sn = %.3f", tinhTOAN(x, n));
		printf("\nNhap 0 de thoat. Nhap so bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\t\t\t\tTINH S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!");
}
void inputDATA(float *x, float *n)
{
	printf("\nInput x:\a");
	scanf("%f", &*x);
	printf("\nInput n:\a");
	scanf("%f", &*n);
}
float tinhTOAN(float x, float n)
{
	float T= 0;
	float gt = 1;
	float S = 0;
	int j = 0;
	for (int i = 1; i <= n; i++)
	{
		// phan tu cua ham mu
		T += (2 * j) + 1;
		j++;
		// phan mau giai thua
		gt *= i; 
		S += 1 + pow(double(x), double(T / gt));
	}
	return S;
}
