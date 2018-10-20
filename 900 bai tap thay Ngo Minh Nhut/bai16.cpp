#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		printf("*************** Tinh S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3 )+ ... + x^n/(1 + 2 + 3 + .... + N) ***************");
		float x;
		int n;
		do
		{
			printf("\nNhap x:\a");
			scanf("%f", &x);
			printf("\nNhap n:\a");
			scanf("%d", &n);
			if (n == 0)	printf("\n>>Nhap n != 0, Nhap lai!<<");
		} while (n == 0);
		float S = 0;
		int T = 0;
		int i;
		for (i = 1; i <= n; i++)
		{
			T += i;
			S += pow(double(x), double(float(i) / T));
			printf("\nS(%d) = %.3f", i, S);
		}
		printf("\n\t=>>Sn = %.3f", S);
		printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
