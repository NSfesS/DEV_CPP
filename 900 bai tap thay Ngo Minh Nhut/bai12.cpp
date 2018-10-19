#include <stdio.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		printf("Tinh S(n)=x+x^2+...+x^n");
		float x;
		int n;
		do
		{
			printf("\nNhap x:\a");
			scanf("%f", &x);
			if (x == 0) printf("\n>>Phai nhap x != 0,Nhap lai!<<");
			do
			{
			printf("\nNhap n:\a");
			scanf("%d",&n);
			if (n < 0)	printf("\n>>Nhap n > 0 ,Nhap lai!<<");
			}while(n < 0);
		} while (x == 0 || n < 0);
		float S = 0;
		int i;
		for (i = 1; i <= n; i++)
		{
			S += pow(double(x),double(i));
			printf("\nS(%d)=%.3f", i, S);
		}
		printf("\n\tS(n)=%.3f", S);
		printf("\nNhap 0 de thoat, Nhap ky tu bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	}while (flag != 0);
return 0;
}
