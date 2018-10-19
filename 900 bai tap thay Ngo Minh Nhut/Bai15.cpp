#include <stdio.h>
int main()
{
	int flag = 1;
	do
	{
		int n;
		do
		{
			printf("Tinh S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ..... + 1/ 1 + 2 + 3 + .... + N");
			printf("\nNhap n:\a");
			scanf("%d", &n);
			if (n < 0)	printf("\nPhai nhap n > 0,Nhap lai!");
		} while (n < 0);
		int i,a=0;
		float S = 0;
		for (i = 1; i <= n; i++)
		{
			// Chu y ep (float) vi co dap so xe ra so thuc.
			S +=float (1) /(i + a);
			a++;
			printf("\nS(%d)=%.3f", i, S);
		}
		printf("\n\t=>Sn=%.3f", S);
		printf("\nNhap 0 de thoat, Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
