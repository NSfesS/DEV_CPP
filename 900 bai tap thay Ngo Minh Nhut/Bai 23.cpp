#include <stdio.h>

void notifications();
void input(int *n);
int tinhTOAN(int n);
int main()
{
	int flag = 1;
	do
	{
		int n;
		notifications();
		input(&n);
		tinhTOAN(n);
		printf("\n\t\tNhap 0 de thoat. Nhap bat ly de tiep tuc[_]\b\b");
		scanf("%d",&flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\n\t\t\t\tDEM SO LUONG UOC SO NGUYEN");
}
void input(int*n)
{
	do
	{
	printf("\nNhap vao \"UOC\" so nguyen duong: \a");
	scanf("%d", &*n);
	if(n < 0) printf("\n>>>PHAI NHAP n > 0. NHAP LAI!");
	}while (n < 0);
}
int tinhTOAN(int n)
{
	int i, p = 0;
	printf("\n>>Uoc so cua %d la :", n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			printf("\t%d", i);
			p++;
		}
	}
	printf("\n>>So luong uoc so nguyen duong la: %d\n", p);
	return 0;
}
