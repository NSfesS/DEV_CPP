// Conditions check input a and b .If is type characters false ,if is type numbers true^^
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("color 02");
	int flag = 1;
	do
	{
		printf("Tinh S = a + b");
		char a, b;
		do {
			printf("\nNhap a:\a");
			scanf("%s", &a);
			if ((a >= 'A'&& a <= 'Z') || (a >= 'a'&& a <= 'z')) printf("\nNhap sai, Ban phai nhap so!");
			else if (a >= -10000 && a <= 1000)
			{
				do
				{
					printf("\nNhap b:\a");
					scanf("%s", &b);
					if ((b >= 'A'&& b <= 'Z') || (b >= 'a'&& b <= 'z')) printf("\nNhap sai, Ban phai nhap so!");
					else if (b >= -1000 && b <= 1000)
					{
						float x = a - '0', y = b - '0';
						float(S) = x + y;
						printf("\n\t=>> %.3f + %.3f = %.3f", x, y, S);
					}
				} while ((b >= 'A'&& b <= 'Z') || (b >= 'a'&& b <= 'z'));
			}
		} while ((a >= 'A'&& a <= 'Z') || (a >= 'a'&& a <= 'z'));
		printf("\nNhap 0 de thoat, Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
