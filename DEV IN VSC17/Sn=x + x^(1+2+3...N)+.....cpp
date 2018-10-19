#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	system("color 02");
	int flag = 1;
	do
	{
		printf("Tinh S(n) = x + x^(2/(1 + 2)) + x^(3/(1 + 2 + 3)) + ... + x^n/((1 + 2 + 3 + .... + N))");
		char x, n;
		int MAX = 100000;
		do
		{
			printf("\nNhap x:\a");
			scanf("%s", &x);
			if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))	printf("\n>>Nhap sai. Phai nhap so!<<");
			else if (x >= -MAX && x <= MAX)
			{
				do
				{
					printf("\nNhap n:\a");
					scanf("%s", &n);
					if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))	printf("\n>>Nhap sai. Phai nhap so!<<");
					else if (n >= -MAX && n <= MAX)
					{
						float S = 0;
						float a = x - '0';
						int b = n - '0';
						int i, P = 0;
						for (i = 1; i <= b; i++)
						{
							P += i;
							S += float(pow(double(a), double(float(i) / P)));
							printf("\nS(%d)=%.3f", i, S);
						}
						printf("\n\tSn=%.3f", S);
					}
				} while ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'));
			}
		} while ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'));
		printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
