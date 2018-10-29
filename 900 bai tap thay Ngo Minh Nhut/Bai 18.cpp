#include <stdio.h>
#include <math.h>

void notifications();
void inputDATA(float *x, int *n);
float mu(float x, int a);
int giaiTHUA(int j);
// HAM CHINH(1)
int main()
{ 
	int flag = 1;
	do
	{
        float x;
        int n;
		notifications();
		inputDATA(&x, &n);
		//TINH TOAN
        float S = 0;
        for (int i = 1; i <= n; i++)
            S += (float)mu(x,i) / giaiTHUA(i);
        printf("\n\t[KET QUA] Sn = %f", S + 1);
        
		printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d",&flag);
	} while (flag != 0);
	return 0;
}

void notifications()
{
    printf("\t\t\t\t\TINH 1 + x^2/2! + x^4/4! + ... + x^2n/(2n)!");
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
float mu(float x, int a)
{
    float M = pow(double(x), double(2*a));
    return M;
}
int giaiTHUA(int j)
{
    int gt = 1;
    for ( int i = 1; i <= j; i++)
        gt *= (2*i)*(2*i-1);
    return gt;
}
