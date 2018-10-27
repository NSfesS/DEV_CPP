#include <stdio.h>
void notifications();
void input(int *p);
int perform(int n);
int main()
{
	int flag = 1;
	do
	{
		int n;
		notifications();
		input(&n);
		printf("\n[KET QUA] Tong uoc so nho hon chinh no la: %d\n", perform(n));
		printf("\n\t\tNhap 0 de thoat. Nhap ba ky de tiep tuc[_]\b\b"); 
		scanf("%d", &flag);
	} while (flag != 0);
	return 0;
}
void notifications()
{
	printf("\n\t\t\t\tTINH TONG CAC UOC SO NHO HON CHINH NO");
}
void input(int *p)
{
	printf("\n***Nhap vao uoc so: \a");
	scanf("%d", &*p);
}
int perform(int n)
{
	int i, S, T = 0;
	printf("\n>>>Uoc so cua %d la: ", n);
	for (i = 1; i <=n; i++)
	{
		if (n%i == 0)
		{
			printf("\t%d", i);
			T +=i;
			S = T - n;

		}
	}
	return S;
}
