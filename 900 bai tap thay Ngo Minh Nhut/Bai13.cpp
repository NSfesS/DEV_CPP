#include <stdio.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		float x;
		int n;
		do
		{
			printf("\n\nTinh S(n) = x^2 + x^4 + ... + x^2n");
			printf("\nNhap x bat ky:\a");
			scanf("%f", &x);
			printf("\nNhap n bat ky:\a");
			scanf("%d", &n);
			if (x < 0 || n < 2) printf("\nPhai nhap x > 0 and Nhap n >= 2,Nhap lai!");
		} while (x < 0 || n < 2);
		int i;
		float S = 0.0;
		for (i = 1; i <= n; i++)
		{
			S += pow(double(x),double(2*i));
			printf("\nS(%d)=%.3f", i, S);
		}
		printf("\n\tS(n)=%.3f", S);
		printf("\nNhap 0 de thoat, Nhap bat ky de tiep tuc:[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
