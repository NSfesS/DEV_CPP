#include <stdio.h>

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
		input(&n);
		tinhTOAN(n);
		printf("\nNhap 0 de thoat.Nhap bat ky de tiep tuc [_]\b\b");
		scanf("%d", &flag);
	}while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\n\t\t\t\tLIET KE CAC \"UOC SO\" NGUYEN ");
}
void input(int *p)
{
	do
	{
		printf("\nInput so nguyen DUONG: \a");
		scanf("%d", &*p);
		if (*p < 0)	printf("\nPhai nhap so DUONG. Nhap lai!");
	} while (*p < 0);
}
int tinhTOAN(int n)
{	
	int i, U;
	printf("\n[KET QUA]Uoc so cua [%d] la:", n);
	for (i = 1; i <= n; i++)
	{
  // chia lay pha du
		if (n % i == 0)	printf("\t%d", i);
	}
	return 0;
}
