#include <stdio.h>
#include <math.h>
int main()
{
	int flag = 1;
	do
	{
		printf("Tinh S(n)=x+x^2+...+x^n");
		float x;
		do
		{
			printf("\nNhap x:\a");// \a phat ra tieng bip khi compiler ^^
			scanf("%f", &x);
			if (x < 0) printf("\nPhai nhap x > 0,Nhap lai!");
		} while (x < 0);
		float S = 0;
		int n;
		for (n = 1; n <= x; n++)
		{
			S += pow(double(x), double(n));
			printf("\nS(%d)=%.3f", n, S);
		}
		printf("\n\tS(n)=%.3f", S);
		printf("\nNhap 0 de thoat, Nhap ky tu bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	}while (flag != 0);
return 0;
}
