#include <stdio.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		float x;
		printf("S(n) = x + x^3 + x^5 + ... + x^2n + 1");
		printf("\nNhap x bat ky :\a");
		scanf("%f", &x);
		int n;
		do
		{
			printf("\nNhap n:\a");
			scanf("%d", &n);
			if (n < 0) printf("\nPhai nhap n > 0,Nhap lai!");
		} while (n < 0);
		float S = 0;
		int i;
		for (i = 0; i <= n; i++)
		{
			S += pow(double(x), double((2 * i) + 1));
			printf("\nS(%d)=%f", i, S);
		}
		printf("\n\tSn=%f", S);
		printf("\nNhap 0 de thoat, Nhap bat ky de tiep tuc:[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
