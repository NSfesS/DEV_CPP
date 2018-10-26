#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void notifications();
void input(int *p);
int tinhTOAN(int n);
int main()
{
	int flag = 1;
	do
	{
		int n;
		notifications();
		input(&n);// tham chieu 
		tinhTOAN(n);// tham tri
		printf("\n\tNhap o de thoat. Nhap bat ky de tiep tuc [_]");
		scanf("%d", &flag);
	} while (flag != 0);
	//system("pause");
	return 0;
}
void notifications()
{
	system("color 03");
	printf("\n\t\t\t\t\t\tTONG CAC \"UOC\" SO NGUYEN DUONG");
}
void input(int *p)
{
	printf("\n*Nhap vao so nguyen DUONG: \a");
	scanf("%d", &*p);
}
int tinhTOAN(int n)
{
	int S = 0;
	printf("\n>>Uoc so cua %d la :", n);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("\t%d", i);
			S += i;
		}
	}
	printf("\n\t[KET QUA] Tong cac uoc so cua (%d) la : %d", n, S);
	return S;
}
