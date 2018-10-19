#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100000
int main()
{
	system("color 02");
	int flag = 1;
	do
	{
		printf("Tinh S(n) = x + x^(2/(1 + 2)) + x^(3/(1 + 2 + 3)) + ... + x^n/((1 + 2 + 3 + .... + N))");
		char x[MAX], n[MAX];
		int max = MAX;
		do
		{
			printf("\nNhap x:\a");
			scanf("%s",&x);
			if ((x[MAX] >= 'A' && x[MAX] <= 'Z') || (x[MAX] >= 'a' && x[MAX] <= 'z'))
			printf("\n>>Nhap sai. Phai nhap so!<<");
			else if (x[MAX] >= -max&& x[MAX] <= max)
			{
				do
				{
					printf("\nNhap n:\a");
					scanf("%s", &n);
					if ((n[MAX] >= 'A' && n[MAX] <= 'Z') || (n[MAX] >= 'a' && n[MAX] <= 'z'))	
					printf("\n>>Nhap sai. Phai nhap so!<<");
					else if (n[MAX] >= -max && n[MAX] <= max)
					{
						//Convert [(x) characters] thanh [(x) Integer]
						float sum_x = 0;
						int mu_x = 0;
						int i = strlen(x) - 1;//lay do dai of chuoi -1 vi do dai chuoi co /null
						for (i; i >= 0; i--)
						{
							sum_x += (x[i] - 48)*pow(double(10), double(mu_x));
							mu_x++;
							//printf("\nInteger is: %.3f",sum_x);
						}
						// Convert [(n) characters] thanh [(n) Integer].
						float sum_n = 0;
						int mu_n = 0;
						int a = strlen(n) - 1;
						for (a; a >= 0; a--)
						{
							sum_n += (n[a] - 48)*pow(double(10), double(mu_n));
							mu_n++;
							//printf("\nInteger is :%.3f",sum_n);
						}
						// Phep Tinh
						float S = 0;
						int T = 0, j;
						for (j = 1; j <= sum_n; j++)
						{
							T += j;
							S += pow(double(sum_x), double(float(j) / T));
							printf("\nS(%d)= %.3f",j,S);
						}
						printf("\n\t=>>Sn=%.3f",S);
					}
				} while ((n[MAX] >= 'A' && n[MAX] <= 'Z') || (n[MAX] >= 'a' && n[MAX] <= 'z'));
			}
		} while ((x[MAX] >= 'A' && x[MAX] <= 'Z') || (x[MAX] >= 'a' && x[MAX] <= 'z'));
		printf("\nNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
