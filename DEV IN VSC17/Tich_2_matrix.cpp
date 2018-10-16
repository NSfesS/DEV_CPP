#define _CRT_SECURE_NO_WARNINGS //chuyen printf_s thanh printf giup develop de dang hon.
#include <stdio.h>
#define MAX 50
int main()
{
	int flag = 1;
	do
	{
		printf("Tich 2 ma tran\n");

		int a1[MAX][MAX], a2[MAX][MAX];
		int row, col;
		//Nhap vao bien n
		do
		{
			printf("Nhap vao dong:\a");
			scanf("%d", &row);

			printf("Nhap vao cot\a");
			scanf("%d", &col);

			if ((row <= 0 || row > MAX) || (col <= 0 || col > MAX))
				printf("Mang da nhap sai,Nhap lai!\n");

		} while ((row <= 0 || row > MAX) || (col <= 0 || col > MAX));

		int i, j;

		printf("Ma tran a1\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("a1[%d][%d]", i, j);
				scanf("%d", &a1[i][j]);
			}
			printf("\n");
		}
		printf("Ma tran a2\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("a2[%d][%d]", i, j);
				scanf("%d", &a2[i][j]);
			}
			printf("\n");
		}
		int S;
		printf("Tich ma tran la\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				S = (a1[i][j])*(a2[i][j]);
				printf("%d\t", S);
			}
			printf("\n");
		}
		printf("\nNhap 0 de thoat, Nhap so bat ky de tiep tuc:[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
} 
