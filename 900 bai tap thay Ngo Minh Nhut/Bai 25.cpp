// Bai 26_27 dua theo cac bai con lai lam nha ^^
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
		printf("\n=>>Tong cac uoc so chan la : %d\n",tinhTOAN(n));

		printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc[_]\b\b");
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\n\t\t\t\tTINH TONG CAC UOC SO CHAN");
}
void input(int *p)
{
	printf("\nNhap uoc so : \a");
	scanf("%d", &*p);
}
int tinhTOAN(int n)
{
	int S = 0;
	printf("\n>>>Uoc so cua %d la:\n", n);
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			printf("\t%d", i);
			if (i % 2 == 0)
			S += i;
		}
	}
	return S;
}
