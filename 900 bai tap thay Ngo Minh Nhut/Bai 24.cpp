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
		printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\n\t\t\t\tLIET KE CAC UOC SO LE DUONG");
}
void input(int *p)
{
	printf("\nNhap vao so: \a");
	scanf("%d", &*p);
}
int tinhTOAN(int n)
{
	printf("\nUoc so le la:");
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			if (i % 2 != 0)	printf("\t%d", i);
		}
	}
	return 0;
}
